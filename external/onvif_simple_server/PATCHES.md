# Local patches against upstream `onvif_simple_server`

This source tree is **vendored** from
<https://github.com/roleoroleo/onvif_simple_server> (GPLv3, same as our
project). The diffs from upstream are kept small and isolated so we can
re-pull without losing them.

## Patch 1 — drop json-c dependency (INI-only configuration)

The upstream supports both INI and JSON config files; only JSON requires
linking against `libjson-c`. We exclusively use INI here (generated at boot
from `settings.json`), so the JSON code path is gated behind a compile-time
`HAVE_JSON_CONFIG` macro that we never define. Effect: no `libjson-c`
linkage, no submodule, no extra binary footprint.

Files touched:
| File | Change |
|---|---|
| `conf.c` | `#include <json-c/json.h>` and the four `get_*_from_json()` helpers + `process_json_conf_file()` body wrapped in `#ifdef HAVE_JSON_CONFIG` |
| `conf.h` | `int process_json_conf_file(char *file);` declaration wrapped in `#ifdef HAVE_JSON_CONFIG` |
| `onvif_simple_server.c` | filename-suffix dispatch (`.json` → `process_json_conf_file`) gated; falls through to `process_conf_file` unconditionally when the macro is undefined |
| `onvif_notify_server.c` | same gating as `onvif_simple_server.c` |

To restore JSON-config support, add `-DHAVE_JSON_CONFIG=1` to `CFLAGS` and
link against `libjson-c` (or vendor it).

## Patch 3 — replace `log.c` with a zlog adapter

Upstream uses [rxi/log.c](https://github.com/rxi/log.c) (MIT) for its
internal logging. We swap the implementation file with a thin shim that
keeps the same `log.h` interface (`log_info`, `log_debug`, `log_set_level`,
…) but routes every line through the project-wide `zlog` library, so
ONVIF lines end up in `/var/log/rtsp_streamer.log` under category
`"onvif"` alongside the imager/server/isp_adj categories.

Files touched:
| File | Change |
|---|---|
| `log.c` | Replaced wholesale. New body links against `<zlog.h>` and forwards `log_log()` calls to `zlog_*` of the matching level. The `log_set_level` / `log_set_quiet` / `log_add_fp` / `log_set_lock` / `log_add_callback` / `log_level_string` symbols are still provided so upstream callers compile unchanged; the level/file/quiet ones are no-ops because zlog config (`/var/tmp/sd/zlog.conf`) handles routing. |
| `log.h` | Unchanged from upstream. |

Re-pulling upstream's `log.c` would put the rxi implementation back; just
keep our `log.c` and ignore the diff (the API is identical, so upstream
source files don't need tweaks either way).

## Patch 2 — make `<zlib.h>` include conditional on `USE_ZLIB`

Upstream `utils.c` always `#include <zlib.h>` even though every actual
zlib API call is already wrapped in `#ifdef USE_ZLIB`. We don't ship
zlib for the target, so the unconditional include breaks the cross-build.
Trivial fix: wrap the include in `#ifdef USE_ZLIB` to match the rest.

| File | Change |
|---|---|
| `utils.c` | `#include <zlib.h>` (after the crypto include block) wrapped in `#ifdef USE_ZLIB` |

## Patch 4 — add Imaging service

Upstream ships Device, Media, Media2, PTZ, Events, DeviceIO. We add an
Imaging service (ONVIF Profile S, `ver20/imaging/wsdl`) that wraps the
camera's ISP controls so clients can read/write brightness, contrast,
saturation, sharpness, BLC, WDR, and IR-cut filter mode over SOAP.

Methods implemented: `GetServiceCapabilities`, `GetImagingSettings`,
`SetImagingSettings`, `GetOptions`. Focus/Move methods return fault
(no AF hardware on these boards).

Files added:
| File | Purpose |
|---|---|
| `imaging_service.{c,h}` | Handlers: popen `list_all` and parse `key=value` lines for Get; walk known fields and shell out to `set` for Set. |
| `imaging_service_files/*.xml` | Four response templates with placeholder slots. |

Files touched:
| File | Change |
|---|---|
| `onvif_simple_server.{c,h}` | New `imaging_service` branch in the prog_name dispatcher (3 sites); `imaging_node_t` struct added to `service_context_t`; `imaging_service.h` included. |
| `conf.c` | Initialize `service_ctx.imaging_node` defaults; parse `imaging=`, `list_all=`, `set=`, `get_ir_cut=`, `set_ir_cut=` keys; free them in `free_conf_file`. |
| `CMakeLists.txt` | `imaging_service.c` added to the source list. |

## Patch 5 — wire up SetVideoEncoder/SourceConfiguration

Upstream's `media_set_video_encoder_configuration` and
`media_set_video_source_configuration` always return a SOAP fault. We
replace the bodies so they actually persist the requested settings
(via the `settings_tool` helper that edits `/var/tmp/sd/settings.json`).

The dispatcher previously gated those handlers on `adv_fault_if_set==1`;
we drop the gate so the handlers run unconditionally.

Files touched:
| File | Change |
|---|---|
| `media_service.c` | `media_set_video_source_configuration` returns success for the `VideoSourceConfigToken` token (we don't crop, so any bounds are silently accepted). `media_set_video_encoder_configuration` parses `Width`, `Height`, `FrameRateLimit`, `BitrateLimit` and shells out to `/var/tmp/sd/settings_tool set encoder.<field> <value>`. |
| `onvif_simple_server.c` | `adv_fault_if_set` gating removed from the four `SetVideo/AudioSource/EncoderConfiguration` dispatch branches. |
| `media_service_files/SetVideoEncoderConfiguration.xml`, `SetVideoSourceConfiguration.xml` | New response templates. |

Encoder-config changes persist on disk but only take effect on the next
`imagerd` restart.

## Patch 6 — correct AAC bitrate/samplerate in encoder options

Upstream's `media_get_audio_encoder_configuration_options` hardcodes AAC
at 50 kbps / 16 kHz. The RTS3903N SDK only accepts 16 kHz and 48 kHz at
encoder-bind time and we run 48 kHz mono at 64 kbps, so the advertised
options need to match what the camera actually emits — otherwise NVR
clients negotiate a config we can't deliver.

Files touched:
| File | Change |
|---|---|
| `media_service.c` | Both AAC branches of `media_get_audio_encoder_configuration_options` (profile 0 and profile 1) updated from `bitrate=50, samplerate=16` to `bitrate=64, samplerate=48`. The AAC decoder branch is left alone — we don't implement audio backchannel, so its values are unused. |

## Re-pulling from upstream

When you want to grab a newer release:

```
git clone --depth=1 https://github.com/roleoroleo/onvif_simple_server.git /tmp/onvif_recon
diff -ruN /tmp/onvif_recon src/onvif_simple_server > /tmp/local.patch
# inspect /tmp/local.patch — every hunk should match this document
```

Then either re-vendor and re-apply the patch, or merge upstream commits
into the vendored tree by hand.
