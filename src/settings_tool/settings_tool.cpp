// Tiny CLI for reading/writing dot-paths in /var/tmp/sd/settings.json.
// Used by onvif_simple_server handlers that need to persist non-ISP
// values (encoder bitrate, resolution, fps, etc.) without depending on
// a runtime JSON library.

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>
#include <vector>

#include <json.hpp>

#define SETTINGS_FILE "/var/tmp/sd/settings.json"

static std::vector<std::string> split_dots(const std::string &s) {
    std::vector<std::string> out;
    std::string cur;
    for (char c : s) {
        if (c == '.') { out.push_back(cur); cur.clear(); }
        else          { cur += c; }
    }
    if (!cur.empty()) out.push_back(cur);
    return out;
}

static nlohmann::json load() {
    std::ifstream f(SETTINGS_FILE);
    if (!f.is_open()) return nlohmann::json::object();
    nlohmann::json j;
    try { f >> j; } catch (...) { return nlohmann::json::object(); }
    return j;
}

static int save(const nlohmann::json &j) {
    std::ofstream f(SETTINGS_FILE);
    if (!f.is_open()) { perror(SETTINGS_FILE); return 1; }
    f << j.dump(2);
    return 0;
}

static nlohmann::json *navigate(nlohmann::json &root, const std::vector<std::string> &path, bool create) {
    nlohmann::json *cur = &root;
    for (size_t i = 0; i + 1 < path.size(); i++) {
        if (!cur->contains(path[i])) {
            if (!create) return nullptr;
            (*cur)[path[i]] = nlohmann::json::object();
        }
        cur = &(*cur)[path[i]];
    }
    return cur;
}

// Best-effort: int → as int, else double → as double, else string.
static nlohmann::json parse_value(const std::string &s) {
    char *end = nullptr;
    long long ll = strtoll(s.c_str(), &end, 10);
    if (end != s.c_str() && *end == '\0') return ll;
    double d = strtod(s.c_str(), &end);
    if (end != s.c_str() && *end == '\0') return d;
    if (s == "true")  return true;
    if (s == "false") return false;
    return s;
}

static int cmd_get(const std::string &path) {
    auto j = load();
    auto parts = split_dots(path);
    if (parts.empty()) return 2;
    auto *parent = navigate(j, parts, false);
    if (parent == nullptr || !parent->contains(parts.back())) {
        fprintf(stderr, "settings_tool: %s not found\n", path.c_str());
        return 1;
    }
    const auto &v = (*parent)[parts.back()];
    if      (v.is_string())  printf("%s\n", v.get<std::string>().c_str());
    else if (v.is_boolean()) printf("%s\n", v.get<bool>() ? "true" : "false");
    else                     printf("%s\n", v.dump().c_str());
    return 0;
}

static int cmd_set(const std::string &path, const std::string &value) {
    auto j = load();
    auto parts = split_dots(path);
    if (parts.empty()) return 2;
    auto *parent = navigate(j, parts, true);
    if (parent == nullptr) return 1;
    (*parent)[parts.back()] = parse_value(value);
    return save(j);
}

int main(int argc, char **argv) {
    if (argc < 3) {
        fprintf(stderr,
            "settings_tool — read/write dot-paths in " SETTINGS_FILE "\n"
            "  %s get <a.b.c>\n"
            "  %s set <a.b.c> <value>\n",
            argv[0], argv[0]);
        return 2;
    }
    if (!strcmp(argv[1], "get")) return cmd_get(argv[2]);
    if (!strcmp(argv[1], "set")) {
        if (argc < 4) return 2;
        return cmd_set(argv[2], argv[3]);
    }
    return 2;
}
