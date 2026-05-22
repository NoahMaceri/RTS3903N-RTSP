// ONVIF backend for /dev/ssp. Each subcommand maps to an entry in the
// [ptz] section of onvif.conf and is invoked via system()/popen() by
// onvif_simple_server. Pan/tilt is in ONVIF Profile S [-1, +1] coords
// where +x = right, +y = up; the kernel uses 0..X_MAX / 0..Y_MAX with
// 0 = right/up hard stop.

#include <cerrno>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fcntl.h>
#include <fstream>
#include <string>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <vector>

#include "factory_data.h"

#define PTZ_X_MAX         0x1000
#define PTZ_Y_MAX         0x5A0
#define PTZ_PERIOD_US     8000
#define PTZ_DEFAULT_SPEED 2

#define PRESETS_PATH      "/var/tmp/sd/onvif/ptz_presets.txt"
#define HOME_PRESET_NUM   0

enum ptz_direct {
  PTZ_STOP = 0, PTZ_UP = 1, PTZ_DOWN = 2, PTZ_LEFT = 3, PTZ_RIGHT = 4,
};

static inline double clampd(double v, double lo, double hi) {
  return v < lo ? lo : (v > hi ? hi : v);
}

static uint32_t onvif_x_to_kernel(double x) {
  return (uint32_t)round((1.0 - clampd(x, -1.0, 1.0)) * PTZ_X_MAX / 2.0);
}
static uint32_t onvif_y_to_kernel(double y) {
  return (uint32_t)round((1.0 - clampd(y, -1.0, 1.0)) * PTZ_Y_MAX / 2.0);
}
static double kernel_x_to_onvif(uint32_t kx) {
  return 1.0 - (double)kx * 2.0 / PTZ_X_MAX;
}
static double kernel_y_to_onvif(uint32_t ky) {
  return 1.0 - (double)ky * 2.0 / PTZ_Y_MAX;
}

// Higher divisor = shorter step interval = faster. The driver caps
// internally at 4 (>= 10 maps to 4 silently); stepping faster stalls.
static uint32_t vel_to_speed(double vel) {
  vel = clampd(vel, 0.0, 1.0);
  return 2 + (uint32_t)round(vel * 2.0);
}

static uint32_t steps_to_amount(uint32_t steps, uint32_t speed) {
  if (speed == 0) speed = PTZ_DEFAULT_SPEED;
  const uint32_t divisor = PTZ_PERIOD_US / speed;
  return (steps * divisor + 50) / 100;
}

static int try_open_ssp() { return open("/dev/ssp", O_RDWR); }

static int open_ssp_or_die() {
  int fd = try_open_ssp();
  if (fd < 0) { perror("open /dev/ssp"); exit(1); }
  return fd;
}

static int ssp_status(int fd, uint32_t *x, uint32_t *y, uint32_t *running) {
  uint32_t st[8] = {};
  if (ioctl(fd, 1, st) < 0) return -1;
  *x = st[0]; *y = st[1]; *running = st[5];
  return 0;
}

static int ssp_move(int fd, uint32_t dir, uint32_t speed, uint32_t amount) {
  uint32_t mv[8] = {};
  mv[2] = dir; mv[3] = speed; mv[4] = amount;
  return ioctl(fd, 2, mv);
}

static int ssp_stop(int fd) {
  uint32_t z[8] = {};
  return ioctl(fd, 3, z);
}

static int ssp_wait_idle(int fd, int timeout_ms) {
  int waited = 0;
  uint32_t x, y, r;
  while (true) {
    if (ssp_status(fd, &x, &y, &r) < 0) return -1;
    if (r == 0) return 0;
    if (waited >= timeout_ms) return -2;
    usleep(100 * 1000); waited += 100;
  }
}

// Async — caller is responsible for issuing Stop. Used for ContinuousMove.
static int kernel_move_toward_edge(int fd, uint32_t dir, double vel) {
  uint32_t cur_x, cur_y, run;
  if (ssp_status(fd, &cur_x, &cur_y, &run) < 0) return -1;
  uint32_t remaining = 0;
  switch (dir) {
    case PTZ_LEFT:  remaining = PTZ_X_MAX - cur_x; break;
    case PTZ_RIGHT: remaining = cur_x;             break;
    case PTZ_DOWN:  remaining = PTZ_Y_MAX - cur_y; break;
    case PTZ_UP:    remaining = cur_y;             break;
    default:        return -2;
  }
  if (remaining == 0) return 0;
  const uint32_t speed  = vel_to_speed(vel);
  const uint32_t amount = steps_to_amount(remaining, speed);
  return ssp_move(fd, dir, speed, amount);
}

struct Preset { int num; std::string name; double x, y, z; };

static std::vector<Preset> load_presets() {
  std::vector<Preset> out;
  std::ifstream f(PRESETS_PATH);
  if (!f.is_open()) return out;
  std::string line;
  while (std::getline(f, line)) {
    if (line.empty() || line[0] == '#') continue;
    int num;
    char name[128];
    double x, y, z;
    if (sscanf(line.c_str(), "%d=%127[^,],%lf,%lf,%lf",
               &num, name, &x, &y, &z) == 5) {
      out.push_back({num, std::string(name), x, y, z});
    }
  }
  return out;
}

static int save_presets(const std::vector<Preset> &v) {
  mkdir("/var/tmp/sd/onvif", 0755);
  std::ofstream f(PRESETS_PATH);
  if (!f.is_open()) {
    fprintf(stderr, "cannot write %s: %s\n", PRESETS_PATH, strerror(errno));
    return -1;
  }
  for (const auto &p : v) {
    f << p.num << "=" << p.name << ","
      << p.x << "," << p.y << "," << p.z << "\n";
  }
  return 0;
}

static int cmd_get_position() {
  int fd = open_ssp_or_die();
  uint32_t x, y, r;
  int rc = ssp_status(fd, &x, &y, &r);
  close(fd);
  if (rc < 0) return 1;
  printf("%.6f,%.6f,%.6f\n",
         kernel_x_to_onvif(x), kernel_y_to_onvif(y), 1.0);
  return 0;
}

static int cmd_is_moving() {
  int fd = open_ssp_or_die();
  uint32_t x, y, r;
  int rc = ssp_status(fd, &x, &y, &r);
  close(fd);
  if (rc < 0) return 1;
  printf("%d\n", r ? 1 : 0);
  return 0;
}

static int cmd_move_dir(uint32_t dir, double vel) {
  int fd = open_ssp_or_die();
  int rc = kernel_move_toward_edge(fd, dir, vel);
  close(fd);
  return rc < 0 ? 1 : 0;
}

static int cmd_move_stop(const char * /*what*/) {
  int fd = open_ssp_or_die();
  int rc = ssp_stop(fd);
  close(fd);
  return rc < 0 ? 1 : 0;
}

// Issues X and Y independently; the kernel runs each motor on its own
// timer. Fire-and-forget — clients poll GetStatus for completion.
static int cmd_jump_to_abs(double x, double y, double /*z*/) {
  const uint32_t kx = onvif_x_to_kernel(x);
  const uint32_t ky = onvif_y_to_kernel(y);
  int fd = open_ssp_or_die();
  uint32_t cur_x, cur_y, run;
  if (ssp_status(fd, &cur_x, &cur_y, &run) < 0) { close(fd); return 1; }
  const int32_t dx = (int32_t)kx - (int32_t)cur_x;
  const int32_t dy = (int32_t)ky - (int32_t)cur_y;
  if (dx != 0) {
    const uint32_t dir = dx > 0 ? PTZ_LEFT : PTZ_RIGHT;
    const uint32_t steps = dx > 0 ? (uint32_t)dx : (uint32_t)-dx;
    ssp_move(fd, dir, PTZ_DEFAULT_SPEED,
             steps_to_amount(steps, PTZ_DEFAULT_SPEED));
  }
  if (dy != 0) {
    const uint32_t dir = dy > 0 ? PTZ_DOWN : PTZ_UP;
    const uint32_t steps = dy > 0 ? (uint32_t)dy : (uint32_t)-dy;
    ssp_move(fd, dir, PTZ_DEFAULT_SPEED,
             steps_to_amount(steps, PTZ_DEFAULT_SPEED));
  }
  close(fd);
  return 0;
}

static int cmd_jump_to_rel(double dx, double dy, double dz) {
  int fd = open_ssp_or_die();
  uint32_t cur_x, cur_y, run;
  if (ssp_status(fd, &cur_x, &cur_y, &run) < 0) { close(fd); return 1; }
  close(fd);
  return cmd_jump_to_abs(kernel_x_to_onvif(cur_x) + dx,
                         kernel_y_to_onvif(cur_y) + dy, dz);
}

static int upsert_preset(int num, const char *name) {
  int fd = open_ssp_or_die();
  // The driver only commits position on completion, so capturing during
  // a move-in-progress saves the starting position. Wait for idle first.
  if (ssp_wait_idle(fd, 20000) < 0) {
    fprintf(stderr, "set_preset: still moving after 20s, captured position "
                    "may not be the intended one\n");
  }
  uint32_t kx, ky, r;
  int rc = ssp_status(fd, &kx, &ky, &r);
  close(fd);
  if (rc < 0) return 1;
  auto presets = load_presets();
  // onvif_simple_server passes -1 as the sentinel for "no PresetToken in
  // the request, backend pick the number". Translate to next free.
  if (num == -1) {
    int next = HOME_PRESET_NUM + 1;
    bool used;
    do {
      used = false;
      for (const auto &q : presets) if (q.num == next) { used = true; break; }
      if (used) next++;
    } while (used);
    num = next;
  }
  Preset p{num, name ? name : "", kernel_x_to_onvif(kx), kernel_y_to_onvif(ky), 1.0};
  bool replaced = false;
  for (auto &q : presets) {
    if (q.num == num) { q = p; replaced = true; break; }
  }
  if (!replaced) presets.push_back(p);
  return save_presets(presets) < 0 ? 1 : 0;
}

static int cmd_set_preset(int num, const char *name)   { return upsert_preset(num, name); }
static int cmd_set_home_position()                     { return upsert_preset(HOME_PRESET_NUM, "home"); }

static int cmd_remove_preset(int num) {
  auto presets = load_presets();
  std::vector<Preset> kept;
  for (auto &p : presets) if (p.num != num) kept.push_back(p);
  return save_presets(kept) < 0 ? 1 : 0;
}

static int cmd_move_preset(int num) {
  for (const auto &p : load_presets()) {
    if (p.num == num) return cmd_jump_to_abs(p.x, p.y, p.z);
  }
  fprintf(stderr, "move_preset: preset %d not found\n", num);
  return 1;
}

static int cmd_goto_home_position() { return cmd_move_preset(HOME_PRESET_NUM); }

static int cmd_get_presets() {
  for (const auto &p : load_presets()) {
    printf("%d=%s,%.6f,%.6f,%.6f\n",
           p.num, p.name.c_str(), p.x, p.y, p.z);
  }
  return 0;
}

// Exit 0 if PTZ hardware is present; used by config.sh boot gate.
static int cmd_probe() {
  FactoryData fdat;
  if (factory_data_read(&fdat) == 0 && fdat.hw_ver[0] != '1') return 1;
  int fd = try_open_ssp();
  if (fd < 0) return 1;
  uint32_t st[8] = {};
  int rc = ioctl(fd, 1, st);
  close(fd);
  return rc < 0 ? 1 : 0;
}

static int cmd_info() {
  FactoryData fdat;
  if (factory_data_read(&fdat) != 0) {
    printf("Factory data:  unreadable\n");
  } else {
    auto m = factory_motor_from_strings(fdat.hw_ver, fdat.gpio_pin);
    printf("Factory data:\n");
    printf("  hw_ver[0]:   '%c' (%s)\n", fdat.hw_ver[0],
           fdat.hw_ver[0] == '1' ? "PTZ-capable" : "no PTZ hardware");
    printf("  gpio_pin:    \"%s\"\n", fdat.gpio_pin);
    printf("  Motor type:  %s\n", factory_ptz_motor_name(m));
  }
  printf("Kernel range:  X in [0, %d]  Y in [0, %d]\n", PTZ_X_MAX, PTZ_Y_MAX);
  printf("ONVIF space:   x in [-1.0, +1.0]  y in [-1.0, +1.0]  z=1.0\n");

  int fd = try_open_ssp();
  if (fd < 0) {
    printf("/dev/ssp:      absent\n");
    return 0;
  }
  printf("/dev/ssp:      present\n");

  uint32_t x, y, r;
  if (ssp_status(fd, &x, &y, &r) == 0) {
    printf("Position:      kernel=(%u, %u)  onvif=(%+.3f, %+.3f)  running=%u\n",
           x, y, kernel_x_to_onvif(x), kernel_y_to_onvif(y), r);
  }
  close(fd);

  printf("Presets file:  %s\n", PRESETS_PATH);
  auto presets = load_presets();
  printf("Presets:       %zu loaded\n", presets.size());
  for (const auto &p : presets) {
    printf("  %d: \"%s\" at onvif (%+.3f, %+.3f, %+.3f)\n",
           p.num, p.name.c_str(), p.x, p.y, p.z);
  }
  return 0;
}

// Drive to the hard stops. amount=0xFFFFFFFF + speed=20 is the
// kernel's "go until you can't" idiom; it clamps target to axis_max.
static int cmd_park() {
  int fd = open_ssp_or_die();
  fprintf(stderr, "park: calibrating X to 0...\n");
  if (ssp_move(fd, PTZ_RIGHT, 20, 0xFFFFFFFF) < 0) { close(fd); return 1; }
  if (ssp_wait_idle(fd, 8000) < 0) { ssp_stop(fd); close(fd); return 1; }
  fprintf(stderr, "park: calibrating Y to 0...\n");
  if (ssp_move(fd, PTZ_UP,    20, 0xFFFFFFFF) < 0) { close(fd); return 1; }
  if (ssp_wait_idle(fd, 8000) < 0) { ssp_stop(fd); close(fd); return 1; }
  ssp_stop(fd);
  close(fd);
  fprintf(stderr, "park: at (0, 0)\n");
  return 0;
}

static void usage(const char *a) {
  fprintf(stderr,
    "ptz_tool — ONVIF backend for /dev/ssp\n"
    "\n"
    "Diagnostic / boot:\n"
    "  %s probe                       exit 0 if PTZ hw present\n"
    "  %s info                        hw, kernel pos, ONVIF pos, presets\n"
    "  %s park                        calibrate to kernel (0, 0)\n"
    "\n"
    "ONVIF backend (called by onvif_simple_server):\n"
    "  %s get_position                stdout: \"x,y,z\" in ONVIF coords\n"
    "  %s is_moving                   stdout: \"0\" or \"1\"\n"
    "  %s move_left  <vel>            async ContinuousMove; vel in (0, 1]\n"
    "  %s move_right <vel>\n"
    "  %s move_up    <vel>\n"
    "  %s move_down  <vel>\n"
    "  %s move_in    <vel>            no zoom (no-op)\n"
    "  %s move_out   <vel>            no-op\n"
    "  %s move_stop  <all|pantilt|zoom>\n"
    "  %s jump_to_abs <\"x,y,z\">       absolute (x,y) in [-1, +1]\n"
    "  %s jump_to_rel <\"dx,dy,dz\">    relative delta\n"
    "  %s move_preset <num>\n"
    "  %s goto_home_position\n"
    "  %s set_preset <num> <name>     -1 = backend allocates next free\n"
    "  %s set_home_position\n"
    "  %s remove_preset <num>\n"
    "  %s get_presets                 stdout: \"num=name,x,y,z\" per line\n",
    a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a,a);
  exit(2);
}

#define NEED_ARGC(n) do { if (argc < (n)) usage(argv[0]); } while (0)

int main(int argc, char **argv) {
  if (argc < 2) usage(argv[0]);
  const char *cmd = argv[1];

  if (!strcmp(cmd, "probe"))    return cmd_probe();
  if (!strcmp(cmd, "info"))     return cmd_info();
  if (!strcmp(cmd, "park"))     return cmd_park();

  if (!strcmp(cmd, "get_position")) return cmd_get_position();
  if (!strcmp(cmd, "is_moving"))    return cmd_is_moving();

  if (!strcmp(cmd, "move_left"))  { NEED_ARGC(3); return cmd_move_dir(PTZ_LEFT,  atof(argv[2])); }
  if (!strcmp(cmd, "move_right")) { NEED_ARGC(3); return cmd_move_dir(PTZ_RIGHT, atof(argv[2])); }
  if (!strcmp(cmd, "move_up"))    { NEED_ARGC(3); return cmd_move_dir(PTZ_UP,    atof(argv[2])); }
  if (!strcmp(cmd, "move_down"))  { NEED_ARGC(3); return cmd_move_dir(PTZ_DOWN,  atof(argv[2])); }
  if (!strcmp(cmd, "move_in") || !strcmp(cmd, "move_out")) return 0;
  if (!strcmp(cmd, "move_stop"))  return cmd_move_stop(argc >= 3 ? argv[2] : "all");

  if (!strcmp(cmd, "jump_to_abs") || !strcmp(cmd, "jump_to_rel")) {
    NEED_ARGC(3);
    double x, y, z = 1.0;
    if (sscanf(argv[2], "%lf,%lf,%lf", &x, &y, &z) < 2) {
      fprintf(stderr, "%s: expected \"x,y,z\" — got %s\n", cmd, argv[2]);
      return 2;
    }
    return !strcmp(cmd, "jump_to_abs") ? cmd_jump_to_abs(x, y, z)
                                       : cmd_jump_to_rel(x, y, z);
  }

  if (!strcmp(cmd, "move_preset"))        { NEED_ARGC(3); return cmd_move_preset(atoi(argv[2])); }
  if (!strcmp(cmd, "goto_home_position")) return cmd_goto_home_position();

  if (!strcmp(cmd, "set_preset"))         { NEED_ARGC(4); return cmd_set_preset(atoi(argv[2]), argv[3]); }
  if (!strcmp(cmd, "set_home_position"))  return cmd_set_home_position();
  if (!strcmp(cmd, "remove_preset"))      { NEED_ARGC(3); return cmd_remove_preset(atoi(argv[2])); }
  if (!strcmp(cmd, "get_presets"))        return cmd_get_presets();

  usage(argv[0]);
  return 2;
}
