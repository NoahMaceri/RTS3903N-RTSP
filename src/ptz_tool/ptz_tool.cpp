// ptz_ok.c
#include <cerrno>
#include <fcntl.h>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <sys/ioctl.h>
#include <unistd.h>
#include <cstdlib>
#include <map>

#define PTZ_STEP      0x00000100
#define PTZ_SPEED     5
#define PTZ_MAX_ITERS 500

enum ptz_direct {
  PTZ_STOP = 0x00,
  PTZ_RIGHT = 0x04,
  PTZ_LEFT = 0x03,
  PTZ_UP = 0x01,
  PTZ_DOWN = 0x02,
};

const std::map<std::string, uint32_t> dir_map = {
  {"up", PTZ_UP},
  {"down", PTZ_DOWN},
  {"left", PTZ_LEFT},
  {"right", PTZ_RIGHT},
};

typedef struct {
  uint32_t x; // st[0]
  uint32_t y; // st[1]
  uint32_t running; // st[5]
  uint32_t raw[8]; // full 32B status
} ptz_status_t;

// Non-fatal version: returns -1 if /dev/ssp is missing or unreadable.
// Used by the `probe` subcommand so it can return a clean exit code
// instead of dying with perror+exit(1).
static int try_open_ssp() {
  return open("/dev/ssp", O_RDWR);
}

static int open_ssp() {
  const int fd = try_open_ssp();
  if (fd < 0) {
    perror("open /dev/ssp");
    fprintf(stderr,
            "  (this camera may not have PTZ hardware, or ssp_ms41909.ko is not loaded;\n"
            "   run `%s probe` to check non-destructively)\n",
            "ptz_tool");
    exit(1);
  }
  return fd;
}

// Probe the PTZ motor stack. Returns 0 if /dev/ssp exists AND a status
// ioctl succeeds (i.e. the motor controller is actually responsive),
// 1 otherwise. Used by boot scripts to decide whether to bother with
// the 30s PTZ calibration wait.
//
// Two layers of check, matching the failure modes observed on
// non-PTZ Victure variants:
//   1. /dev/ssp absent  → ssp_ms41909.ko didn't load, no PTZ at all
//   2. /dev/ssp present but ioctl(STATUS) errors → module loaded but
//      the SPI/PWM motor controller chip isn't physically there
static int ptz_probe() {
  const int fd = try_open_ssp();
  if (fd < 0) {
    // Silent — boot scripts call this in the common path
    return 1;
  }
  uint32_t st[8] = {};
  const int rc = ioctl(fd, 1, st);
  close(fd);
  if (rc < 0) return 1;
  return 0;
}

static int ssp_ioctl(const int32_t fd, const uint32_t cmd, uint32_t buf[8]) {
  // Always pass the 3rd arg (varargs), even if cmd “doesn’t need it”.
  const int rc = ioctl(fd, cmd, buf);
  if (rc < 0) {
    fprintf(stderr, "ioctl(cmd=%u/0x%x) failed: %s\n", cmd, cmd, strerror(errno));
  }
  return rc;
}

static int ptz_read_status(const int fd, ptz_status_t *out) {
  uint32_t st[8] = {};
  const int rc = ioctl(fd, 1, st);
  if (rc < 0) {
    fprintf(stderr, "ioctl(cmd=1) failed: %s\n", strerror(errno));
    return -2;
  }
  out->x = st[0];
  out->y = st[1];
  out->running = st[5];
  memcpy(out->raw, st, sizeof(st));
  return 0;
}

static int ptz_move(const int fd, const uint32_t dir, const uint32_t speed, const uint32_t amt) {
  uint32_t mv[8] = {};
  mv[2] = dir; // offset 0x08
  mv[3] = speed; // offset 0x0C
  mv[4] = amt; // offset 0x10
  const int ret = ssp_ioctl(fd, 2, mv);
  return ret;
}

static void ptz_stop(const int fd) {
  uint32_t z[8] = {};
  ssp_ioctl(fd, 3, z);
}

// wait until running becomes 0
static int ptz_wait_done(const int fd, const int timeout_ms) {
  int waited_ms = 0;
  ptz_status_t s;
  while (true) {
    constexpr int interval_ms = 100;
    if (ptz_read_status(fd, &s) < 0) return -1;
    if (s.running == 0) return 0;
    if (waited_ms >= timeout_ms) return -2;
    usleep(interval_ms * 1000);
    waited_ms += interval_ms;
  }
}

#define ptz_calibrate_x_zero(fd) ptz_move(fd, PTZ_RIGHT, 20, 0xFFFFFFFF)
#define ptz_calibrate_y_zero(fd) ptz_move(fd, PTZ_UP, 20, 0xFFFFFFFF)

int ptz_goto_x_stepwise(const int fd, const uint32_t target_x) {
  ptz_calibrate_x_zero(fd);
  ptz_wait_done(fd, 5000);
  ptz_stop(fd);
  ptz_status_t s;
  if (ptz_read_status(fd, &s) < 0) return -1;
  for (int i = 0; i < PTZ_MAX_ITERS; i++) {
    if (ptz_move(fd, PTZ_LEFT, PTZ_SPEED, PTZ_STEP) < 0) return -2;
    if (ptz_wait_done(fd, 2000) < 0) {
      ptz_stop(fd);
      return -3;
    }
    if (ptz_read_status(fd, &s) < 0) return -4;
    if (s.x >= target_x) return 0;
  }
  return -6; // didn't converge
}

int ptz_goto_y_stepwise(const int fd, const uint32_t target_y) {
  ptz_calibrate_y_zero(fd);
  ptz_wait_done(fd, 5000);
  ptz_stop(fd);
  ptz_status_t s;
  if (ptz_read_status(fd, &s) < 0) return -1;
  for (int i = 0; i < PTZ_MAX_ITERS; i++) {
    if (ptz_move(fd, PTZ_DOWN, PTZ_SPEED, PTZ_STEP) < 0) return -2;
    if (ptz_wait_done(fd, 2000) < 0) {
      ptz_stop(fd);
      return -3;
    }
    if (ptz_read_status(fd, &s) < 0) return -4;
    if (s.y >= target_y) return 0;
  }
  return -6; // didn't converge
}

static void usage(const char *a) {
  fprintf(stderr,
          "Usage:\n"
          "  %s probe                                # exit 0 if PTZ present, 1 otherwise\n"
          "  %s move <up|down|left|right|1|2|3|4> <speed> <amount>\n"
          "  %s stop\n"
          "  %s status\n"
          "  %s goto_x <position>\n"
          "  %s goto_y <position>\n"
          , a, a, a, a, a, a);
  exit(2);
}

int main(const int argc, char **argv) {
  if (argc < 2) usage(argv[0]);

  // `probe` is a special case — it must not exit(1) on missing /dev/ssp,
  // since that's exactly the case the caller is trying to detect.
  if (!strcmp(argv[1], "probe")) {
    return ptz_probe();
  }

  const int fd = open_ssp();

  if (!strcmp(argv[1], "status")) {
    ptz_status_t status{};
    if (ptz_read_status(fd, &status) == 0) {
      printf("PTZ Status:\n");
      printf("  X:       %u\n", status.x);
      printf("  Y:       %u\n", status.y);
      printf("  Running: %u\n", status.running);
      printf("  Raw:     ");
      for (const unsigned int i: status.raw) {
        printf("0x%08x ", i);
      }
      printf("\n");
    }
  } else if (!strcmp(argv[1], "stop")) {
    ptz_stop(fd);
  } else if (!strcmp(argv[1], "move")) {
    // move <dir> <speed> <amount>
    if (argc < 5) usage(argv[0]);
    uint32_t dir;
    auto it = dir_map.find(argv[2]);
    if (it != dir_map.end()) {
      dir = it->second;
    } else {
      dir = strtoul(argv[2], nullptr, 0);
    }
    const uint32_t speed = strtoul(argv[3], nullptr, 0);
    const uint32_t amount = strtoul(argv[4], nullptr, 0);
    ptz_move(fd, dir, speed, amount);
  } else if (!strcmp(argv[1], "goto_x")) {
    // goto_x <position>
    if (argc < 3) usage(argv[0]);
    const uint32_t target_x = strtoul(argv[2], nullptr, 0);
    ptz_goto_x_stepwise(fd, target_x);
  } else if (!strcmp(argv[1], "goto_y")) {
    // goto_y <position>
    if (argc < 3) usage(argv[0]);
    const uint32_t target_y = strtoul(argv[2], nullptr, 0);
    ptz_goto_y_stepwise(fd, target_y);
  } else {
    usage(argv[0]);
  }
  close(fd);
  return 0;
}
