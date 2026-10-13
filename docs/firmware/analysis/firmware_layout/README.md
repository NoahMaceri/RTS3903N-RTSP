# firmware_layout/ — per-partition flash decode

How the 8 MiB SPI-NOR flash is divided and what each partition contains.

| doc | partition | content |
|-----|-----------|---------|
| [`global.md`](global.md) | — | overall flash map, `mtd.txt`, partition hashes |
| [`FIRMWARE.md`](FIRMWARE.md) | — | high-level firmware overview, boot flow, components, security summary |
| [`boot.md`](boot.md) | mtd1 | U-Boot: version, environment, strings |
| [`kernel.md`](kernel.md) | mtd2 | Linux 3.10 uImage: decode, config hints |
| [`vd1.md`](vd1.md) | mtd6 | **device-identity block** — P2P UID, serial, device key (**placeholder values**) |
| [`conf.md`](conf.md) | mtd7 | **runtime config** — Wi-Fi + cloud secrets (**placeholder values**) |

> `vd1.md` and `conf.md` describe real field offsets/types but use **placeholder
> values** in place of this device's secrets. The real blobs are only in the
> git-ignored `../../FirmwareDump/` (`mtdblock6.bin`, `mtdblock7.bin`), and their
> partition hashes are omitted so the device cannot be fingerprinted.
