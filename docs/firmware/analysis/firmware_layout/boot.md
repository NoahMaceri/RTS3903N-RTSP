# boot (mtd1)

Realtek bootloader partition (U-Boot 2014.01, Realtek RTS39xx-family SoC — `rts-quadspi`, `rts_hconf` in bootargs). Not a filesystem.

## Partition

| Property | Value |
|---|---|
| MTD device | `/dev/mtd1` / `/dev/mtdblock1` |
| Source dump | `FirmwareDump/mtdblock1.bin` |
| Flash offset | `0x00000000` – `0x0002ffff` |
| Size | `0x30000` (196,608 bytes / 192 KiB) |
| Erase size | `0x10000` |
| Bytes not 0xFF | 169,380 |
| MD5 | `4730431bf38ce605e4cc5ff976876733` |
| SHA-1 | `597b5c732ba1cb5f36514963dc4d93e5c92d8969` |
| SHA-256 | `3e4ea48db061f0885461197af8d7f1d284dc0a79f7e69111ecb6590ac8443a0e` |

## Region map (4 KiB granularity)

| Start | End | Content |
|---|---|---|
| `0x000000` | `0x001000` | data |
| `0x001000` | `0x002000` | zero (0x00) |
| `0x002000` | `0x02b000` | data |
| `0x02b000` | `0x030000` | erased (0xFF) |

## Identification

| Item | Value |
|---|---|
| Version string | `U-Boot 2014.01-v1.2 (May 22 2019 - 14:48:02)` |
| Default environment | compiled-in at offset `0x21f60` (512 bytes); no separate CRC-protected env sector found |
| Boot command | `bootm bootaddr` → kernel uImage at `0xBC000000 + 0x30000` (SPI flash mmio + kernel partition offset) |
| Console | `ttyS1` @ 57600 baud |
| Kernel cmdline hint | `rts_hconf.hconf_mtd_idx=1` → kernel reads Realtek hardware-config (hconf) from this partition |

## Default U-Boot environment

```
bootargs=console=ttyS1,57600 root=/dev/mtdblock3 rts_hconf.hconf_mtd_idx=1 rts-quadspi.channels=dual mtdparts=m25p80:8192k@0(global),192k@0k(boot),1344k@192k(kernel),1792k@1536k(rootfs),3072k@3328k(userdata),1664k@6400k(rootfs_backup),64k@8064k(vd1),64k@8128k(conf)
bootcmd=bootm bootaddr
bootdelay=0
baudrate=57600
ethaddr=00:00:00:00:00:00
bootaddr=(0xBC000000 + 0x30000)
loadaddr=0x80100000
addmisc=setenv bootargs ${bootargs}console=ttyS0,${baudrate}panic=1
bootfile=/vmlinux.img
load=tftp 80500000 ${u-boot}
```

## Structure notes

- `0x0000` and `0x2000` both start with the word `23 01 00 10` followed by zeros — header blocks (likely Realtek boot/hconf headers; `0x1000–0x2000` is all-zero).
- Code/data runs `0x2000`–`~0x2a400`; the remainder up to `0x30000` is erased (0xFF).
- `binwalk` reports several "JBOOT" headers in this block; these are false positives inside MIPS code.
- CRC32 lookup table present at `0x21b20` (U-Boot `crc32`).

## Header blocks

```
00000000: 2301 0010 0000 0000 0000 0000 0000 0000  #...............
00000010: 0000 0000 0000 0000 0000 0000 0000 0000  ................
*
00000040

00002000: 2301 0010 0000 0000 0000 0000 0000 0000  #...............
00002010: 0000 0000 0000 0000 0000 0000 0000 0000  ................
*
00002100
```

<details>
<summary>All printable strings (≥ 6 chars) — 704 strings</summary>

```
0x01567f  <@Bs&+
0x01ac58  Px9'! @
0x01b2c6  R&pcs&@c
0x0218d0  debug_msg found
0x021902  gpio maigc fail
0x021934  gpio moto set fail
0x0219d8  set_default_env
0x0219e8  do_env_export
0x0219f8  do_env_import
0x021a49  AAAAAA
0x021a69  BBBBBB
0x021c61  Qkkbal
0x021f60  bootargs=console=ttyS1,57600 root=/dev/mtdblock3 rts_hconf.hconf_mtd_idx=1 rts-quadspi.channels=dual mtdparts=m25p80:8192k@0(global),192k@0k(boot),1344k@192k(kernel),1792k@1536k(rootfs),3072k@3328k(userdata),1664k@6400k(rootfs_backup),64k@8064k(vd1),64k@8128k(conf)
0x02206a  bootcmd=bootm bootaddr
0x022081  bootdelay=0
0x02208d  baudrate=57600
0x02209c  ethaddr=00:00:00:00:00:00
0x0220b6  bootaddr=(0xBC000000 + 0x30000)
0x0220d6  loadaddr=0x80100000
0x0220ea  addmisc=setenv bootargs ${bootargs}console=ttyS0,${baudrate}panic=1
0x02212e  bootfile=/vmlinux.img
0x022144  load=tftp 80500000 ${u-boot}
0x0221cc  0123456789ABCDEF
0x022c68  EPTGMK
0x022d28  *** reset failed ***
0x022d48  baudrate
0x022d54  DRAM:  
0x022d5c   @ %d MHz
0x022d68  *** failed ***
0x022d78  Flash: 
0x022d80  loadaddr
0x022d8c  MMC:   
0x022d94  bootargs
0x022da0  exit spi mode fail
0x022db5  Starting kernel ...
0x022ddc  memsize
0x022de4  cpufreq
0x022dec  0x%08lX
0x022df4  initrd_start
0x022e0c  initrd_size
0x022e18  0x%08X
0x022e20  flash_start
0x022e34  flash_size
0x022e40  ethaddr
0x022e48  eth1addr
0x022e54  debug_msg
0x022e60  gpio_magic(0x%x) 
0x022e74  gpio_pin:
0x022e88  UART1 func enable(%s) 
0x022ea0  *E: Channel is occupied
0x022eb8  *E: set SRC_ADDR Failed!%x %x
0x022ed8  *E: set DST_ADDR Failed! %x
0x022ef4  Skipping flash_init
0x022f0c  write_buff not implemented
0x022f28  force spi nor mode
0x022f3c  spi nor rescue mode
0x022f54  spi nand rescue mode
0x022f6c  emmc rescue mode
0x022f80  spi nor boot mode
0x022f94  spi nand boot mode
0x022fa8  emmc boot mode
0x022fb8  Board: IPCAM RTS3903 CPU: %dM :
0x022fd8  rx5381
0x022fe0  rx4381
0x022fe8  rx5271
0x022ff0  rx4271
0x022ff8  rx5281
0x023000  rx4281
0x023008  unknown
0x023010   prid=0x%x
0x02301c  ERROR: invalid sys mem model %d
0x023040  set watchdog, resetting...
0x02305c  ## Starting application at 0x%08lX ...
0x023084  ## Application terminated, rc = 0x%lX
0x0230b4  Perform RESET of the CPU
0x0230d4  start application at address 'addr'
0x0230f8  addr [arg ...]
0x023107      - start application at address 'addr'
0x023131        passing 'arg' as arguments
0x023154  ## Transferring control to RTEMS (at address %08lx) ...
0x023190  ## Transferring control to NetBSD stage-2 loader (at address %08lx) ...
0x0231dc  verify
0x0231e4  ## Booting kernel from Legacy Image at %08lx ...
0x023218  get header OK
0x023228  Bad Magic Number
0x02323c  image_get_kernel check hcrc
0x02325c  Bad Header Checksum
0x023274  image_get_kernel print contents
0x023298     Verifying Checksum ... 
0x0232b4  Bad Data CRC
0x0232c8  Unsupported Architecture 0x%x
0x0232e8  Wrong Image Type for %s command
0x02330c  Wrong Image Format for %s command
0x023330  ERROR: can't get kernel image!
0x023350  ERROR: unknown image format type!
0x023374  Could not find kernel entry point!
0x023398  Ramdisk image is corrupt or invalid
0x0233c0     XIP %s ... 
0x0233d0     Loading %s ... 
0x0233e4     Uncompressing %s ... 
0x023400  GUNZIP: uncompress, out-of-mem or overwrite error - must RESET board to recover
0x023454  Unimplemented compression type %d
0x023478  WARNING: legacy format multi component image overwritten
0x0234b4  ERROR: new format image overwritten - must RESET the board to recover
0x0234fc  initrd_end
0x023508  ERROR: booting os '%s' (%d) is not supported
0x023538  subcommand not supported
0x023554  autostart
0x023564  filesize
0x023570  Trying to execute a command out of order
0x0235a0  Automatic boot of image at addr 0x%08lX ...
0x0235d8  boot application image from memory
0x0235fc  loados
0x023604  ramdisk
0x02360c  cmdline
0x023628  List of available devices:
0x023644  %-8s %08x %c%c%c 
0x02365c  coninfo
0x023664  print console devices and information
0x023698  echo args to console
0x0236b0  [args..]
0x0236b9      - echo args to console; \c suppresses newline
0x0236f4  command error
0x023704  readall
0x02370c  0x%02x, 
0x023720  efuse readall | read addr
0x02373c  read addr
0x023746  - (from 0-23): read 1 byte data from addr in efuse.
0x02377a  efuse readall
0x023788  - read all data in efuse.
0x0237a4  usage: fatinfo <interface> [<dev[:part]>]
0x0237d1  ** Unable to use %s %d:%d for fatinfo **
0x0237fc  fatinfo
0x023804  print information about filesystem
0x023828  <interface> [<dev[:part]>]
0x023843      - print information about filesystem from 'dev' on 'interface'
0x023890  list files in a directory (default /)
0x0238b8  <interface> [<dev[:part]>] [directory]
0x0238df      - list files from 'dev' on 'interface' in a 'directory'
0x02391c  fatload
0x023924  load binary file from a dos filesystem
0x02394c  <interface> [<dev[:part]>]  <addr> <filename> [bytes [pos]]
0x023988      - Load binary file 'filename' from 'dev' on 'interface'
0x0239c4        to address 'addr' from dos filesystem.
0x0239f1        'pos' gives the file position to start loading from.
0x023a2c        If 'pos' is omitted, 0 is used. 'pos' requires 'bytes'.
0x023a6a        'bytes' gives the size to load. If 'bytes' is 0 or omitted,
0x023aac        the load stops on end of file.
0x023ad1        If either 'pos' or 'bytes' are not aligned to
0x023b05        ARCH_DMA_MINALIGN then a misaligned buffer warning will
0x023b43        be printed and performance will suffer for the load.
0x023b80  cmd wong
0x023b9c  %d: 0x%x
0x023bb8  fephy read/write
0x023bcc  fephy rd page_index register_index -- all setting should be hex number
0x023c13  fephy rd page_index register_index value -- all setting should be hex number
0x023c60  fephy dump page_index register_index cycle_num -- all setting should be hex number
0x023cb3  fephy dump page_index register_start register_end-- all setting should be hex number
0x023d10  alias for 'help'
0x023d2c  print command description/usage
0x023d4e  - print brief description of all commands
0x023d78  help command ...
0x023d8a  - print detailed usage of 'command'
0x023db8  halfword
0x023dc4  %s at 0x%08lx (%#0*lx) != %s at 0x%08lx (%#0*lx)
0x023df8  Total of %ld %s(s) were the same
0x023e1c  Base Address: 0x%08lx
0x023e34  Zero length ???
0x023e48  Copy to Flash... 
0x023e6c  %08lx:
0x023e98  infinite loop on address range
0x023eb8  [.b, .w, .l] address number_of_objects
0x023ee8  print or set address offset
0x023f05      - print address offset for memory commands
0x023f34  base off
0x023f3d      - set address offset for memory commands to 'off'
0x023f74  checksum calculation
0x023f8c  address count [addr]
0x023fa1      - compute CRC32 checksum [save at addr]
0x023fd4  memory compare
0x023fe4  [.b, .w, .l] addr1 addr2 count
0x024008  dma copy
0x024014  use physical address: source target count
0x024044  memory copy
0x024050  [.b, .w, .l] source target count
0x024078  memory write (fill)
0x02408c  [.b, .w, .l] address value [count]
0x0240b4  memory modify (constant address)
0x0240d8  [.b, .w, .l] address
0x0240f4  memory modify (auto-incrementing address)
0x024124  memory display
0x024134  [.b, .w, .l] address [# of objects]
0x024164  No MMC device available
0x024180  Device: %s
0x02418c  Manufacturer ID: %x
0x0241a4  OEM: %x
0x0241b0  Name: %c%c%c%c%c 
0x0241c4  Tran Speed: %d
0x0241d4  Rd Block Len: %d
0x0241e8  Wr Block Len: %d
0x0241fc  %s version %d.%d
0x024210  High Capacity: %s
0x024224  Capacity: 
0x024230  Bus Width: %d-bit
0x024244  no mmc device at slot %x
0x024260  byte error %x %x
0x024280  rescan
0x024288  start-%u end-%u wr-%u
0x0242a0  put any key to continue
0x0242bc  loop:%u:start test blk %lu~%lu
0x0242dc  start to write 0x%x %x
0x0242f4  %d blocks write: %s
0x02430c  %d blocks read: %s
0x024320  %d:0x%x passed
0x024330  not a5
0x024338  user canceled
0x024350  get mmc type error!
0x024374  #part_num shouldn't be larger than %d
0x02439c  switch to partitions #%d, %s
0x0243bc  mmc%d(part %d) is current device
0x0243f1  MMC %s: dev # %d, block # %d, count %d ... 
0x024420  %d blocks %s: %s
0x024434  MMC sub system
0x024444  mmc read addr blk# cnt
0x02445b  mmc write addr blk# cnt
0x024473  mmc erase blk# cnt
0x024486  mmc rescan
0x024491  mmc part - lists available partition on current mmc device
0x0244cc  mmc dev [dev] [part] - show or set current mmc device [partition]
0x02450e  mmc list - lists available devices
0x024534  mmcinfo
0x02453c  display MMC info
0x024550  - display info of the current MMC device
0x024584  ## Error: cannot export environment
0x0245ad  Environment size: %d/%ld bytes
0x0245d0  ## Error: "%s" not defined
0x0245ec  ## Warning: defaulting to text format
0x024614  ## Info: input data size = %zu = 0x%zX
0x02463c  ## Error: bad CRC, import failed
0x024660  ERROR: Environment import failed: errno = %d
0x02468e  at %s:%d/%s()
0x0246a0  cmd_nvedit.c
0x0246b0  ## %s: only one of "-b", "-c" or "-t" allowed
0x0246e0  ## Warning: Input data exceeds %d bytes - truncated
0x024718  ## Resetting to default environment
0x024740  ## Error: illegal character '='in variable name "%s"
0x024778  ## Can't malloc %d bytes
0x024794  ## Error inserting "%s" variable, errno=%d
0x0247c0  setenv
0x0247cc  ERROR: Cannot export environment: errno = %d
0x0247fa  at %s:%d/%s()
0x024810  env_buf [%d bytes] too small for value of "%s"
0x024844  edit: 
0x02484c  set environment variables
0x024868  [-f] name value ...
0x02487c      - [forcibly] set environment variable 'name' to 'value ...'
0x0248bc  setenv [-f] name
0x0248cd      - [forcibly] delete environment variable 'name'
0x024904  printenv
0x024910  print environment variables
0x024931      - print [all] values of all environment variables
0x024967  printenv name ...
0x024979      - print value of environment variable 'name'
0x0249ac  editenv
0x0249b4  edit environment variable
0x0249d5      - edit environment variable 'name'
0x0249fc  environment handling commands
0x024a1c  default
0x024a24  delete
0x024a34  export
0x024a3c  import
0x024a4c  %d %s: %d ticks, %d KiB/s %d.%03d Mbps
0x024a74  malloc
0x024a80  Updating, %zu%% %lu B/s
0x024a98  SPI flash failed in %s step
0x024ab8  %zu bytes written, %zu bytes skipped
0x024ae0   in %ld.%lds, speed %ld B/s
0x024b08  Written
0x024b18  Failed to initialize SPI flash at %u:%u
0x024b44  No SPI flash selected. Please run `sf probe'
0x024b74  update
0x024b7c  ERROR: attempting %s past flash size (%#x)
0x024ba8  Failed to map physical memory
0x024bc8  SF: %zu bytes @ %#x %s: %s
0x024be4  SF: %zu bytes @ %#x Erased: %s
0x024c04  sftest
0x024c0c  not same
0x024c18  Cannot allocate memory
0x024c30  SPI flash test:
0x024c44  Erase failed
0x024c54  Check read failed
0x024c68  Check failed at %d
0x024c7c  Write failed
0x024c8c  Read failed
0x024c9c  Verify failed at %d, good data:
0x024cc0  Bad data:
0x024ccc  Test passed
0x024cdc  Test failed
0x024cf0  SPI flash sub-system
0x024d08  probe [[bus:]cs] [hz] [mode]
0x024d25  - init flash device on given SPI bus
0x024d4e    and chip select
0x024d60  sf read addr offset len
0x024d78  - read `len' bytes starting at
0x024d9b    `offset' to memory at `addr'
0x024dba  sf write addr offset len
0x024dd3  - write `len' bytes from memory
0x024df7    at `addr' to flash at `offset'
0x024e18  sf erase offset [+]len
0x024e30  - erase `len' bytes from `offset'
0x024e56    `+len' round up `len' to block size
0x024e7c  sf update addr offset len
0x024e96  - erase and write `len' bytes from memory
0x024ec4    at `addr' to flash at `offset'
0x024ee5  sf test offset len
0x024ef9  - run a very basic destructive test
0x024f20  Bad magic number
0x024f34  Bad header crc
0x024f44  Bad data crc
0x024f54  Bad image type
0x024f64  Empty Script
0x024f74  Wrong image format for "source" command
0x024fa0  ## Executing script at %08lx
0x024fc0  source
0x024fc8  run script from memory
0x024fe0  offset is %x
0x024ff0  file end
0x024ffc  user defined magic number %x at %x
0x025028  /u-boot.bin
0x025034  bootfile
0x025044  /sw.bin
0x025050  /hw.bin
0x025058  kernel
0x025060  /vmlinux.img
0x025070  rootfs
0x025078  /rootfs.bin
0x025088  /ldc.bin
0x02509c  /linux.bin
0x0250a8  update done
0x0250b8  update failed
0x0250c8  linux.bin
0x0250d4  %d bytes read in %lu ms
0x0250f4  update xxx
0x025106  - get uboot.bin by tftp and write to flash
0x025131  update sw
0x02513b  - get software config by tftp and write to flash
0x02516c  update kernel
0x02517a  - get kernel image by tftp and write to flash
0x0251a8  update rootfs
0x0251b6  - get rootfs by tftp and write to flash
0x0251de  update flash
0x0251eb  - parse image in ram, and write it to flash
0x025217  update all
0x025222  - get all image by tftp , parse it and  write to flash
0x025264  mips-linux-uclibc-xgcc (Realtek RSDK-4.8.5p1 Build 2521) 4.8.5 20150209 (prerelease)
0x0252bc  GNU ld (Realtek RSDK-4.8.5p1 Build 2521) 2.24.0
0x0252f0  version
0x0252f8  print monitor, compiler and linker version
0x025324  ## Copying part %d from legacy image at %08lx ...
0x025358  Must specify load address for %s command with compressed image
0x025398  Bad Image Part
0x0253a8  Invalid image type for imxtract
0x0253cc     Loading part %d ... 
0x0253e4     Uncompressing part %d ... 
0x025404  GUNZIP ERROR - image not loaded
0x025428  fileaddr
0x025434  imxtract
0x025440  extract a part of a multi-image
0x025460  %s - %s
0x02546c  Usage:
0x025478  - No additional help available.
0x02549c  %-*s- %s
0x0254a8  Unknown command '%s' - try 'help' without arguments for list of all known commands
0x025500  rlxboot# 
0x025514  Unknown command '%s' - try 'help'
0x025540  stdout
0x025548  stderr
0x025550  Can't delete "%s"
0x025564  In:    
0x02556c  No input devices available!
0x02558c  Out:   
0x025594  No output devices available!
0x0255b4  Err:   
0x0255bc  No error devices available!
0x0255dc  console
0x0255e4  .callbacks:callbacks,.flags:flags,baudrate:baudrate,bootfile:bootfile,loadaddr:loadaddr,stdin:console,stdout:console,stderr:console,
0x02566c  .callbacks
0x025678  callbacks
0x025684  *** Warning - %s, using default environment
0x0256b4  Using default environment
0x0256d0  env_common.c
0x0256e0  !bad CRC
0x0256ec  ERROR: Cannot import environment: errno = %d
0x02571a  at %s:%d/%s()
0x02572c  !import failed
0x02573c  ## Warning: Unknown environment variable type '%c'
0x025770  ## Warning: Unknown environment variable access method '%c'
0x0257b0  .flags
0x0257b8  ## Error: Can't delete "%s"
0x0257d8  ## Error: Can't overwrite "%s"
0x0257f8  oldval: %s  defval: %s
0x025810  ## Error: Can't create "%s"
0x025830  ## Error: flags type check failure for "%s" <= "%s" (type: %c)
0x025878  user write uboot to flash
0x025894  Timeout writing to Flash
0x0258b0  Flash not Erased
0x0258c4  Can't write to protected Flash sectors
0x0258ec  Outside available Flash
0x025908  Start and/or end address not on sector boundary
0x02593c  Unknown Vendor of Flash
0x025958  Unknown Type of Flash
0x025970  General Flash Programming Error
0x025994  Flash Programming Aborted
0x0259b0  %s[%d] FIXME: rc=%d
0x0259c8  flash.c
0x0259d0  CRC32 for %08lx ... %08lx ==> %08lx
0x0259f8  bootm_low
0x025a04  bootm_size
0x025a10  bootm_mapsize
0x025a20  %d Bytes = 
0x025a2c  %4d-%02d-%02d  %2d:%02d:%02d UTC
0x025a50  Unknown OS
0x025a5c  Unknown Architecture
0x025a74  Unknown Image
0x025a84  Unknown Compression
0x025a98  %sImage Name:   %.*s
0x025ab0  %sCreated:      
0x025ac4  %sImage Type:   
0x025ad8  %s %s %s (%s)
0x025ae8  %sData Size:    
0x025afc  %sLoad Address: %08x
0x025b14  %sEntry Point:  %08x
0x025b2c  %sContents:
0x025b3c  %s   Image %d: 
0x025b4c  %s    Offset = 0x%08lx
0x025b6c  ## Loading init Ramdisk from Legacy Image at %08lx ...
0x025ba4  No Linux %s Ramdisk Image
0x025bc0  Wrong Ramdisk Image Format
0x025bdc  ## Loading init Ramdisk from multi component Legacy Image at %08lx ...
0x025c24  initrd_high
0x025c30  ramdisk - allocation error
0x025c4c     Loading Ramdisk to %08lx, end %08lx ... 
0x025c80  uncompressed
0x025c98  bzip2 compressed
0x025cb4  gzip compressed
0x025ccc  lzma compressed
0x025ce0  lzo compressed
0x025cf0  aisimage
0x025cfc  Davinci AIS image
0x025d10  Filesystem Image
0x025d24  firmware
0x025d30  Firmware
0x025d3c  flat_dt
0x025d44  Flat Device Tree
0x025d58  Kernel Image
0x025d68  kernel_noload
0x025d78  Kernel Image (no loading done)
0x025d98  kwbimage
0x025da4  Kirkwood Boot Image
0x025db8  imximage
0x025dc4  Freescale i.MX Boot Image
0x025de0  Invalid Image
0x025df8  Multi-File Image
0x025e0c  omapimage
0x025e18  TI OMAP SPL With GP CH
0x025e30  pblimage
0x025e3c  Freescale PBL Boot Image
0x025e58  RAMDisk Image
0x025e68  script
0x025e70  Script
0x025e78  standalone
0x025e84  Standalone Program
0x025e98  ublimage
0x025ea4  Davinci UBL image
0x025eb8  mxsimage
0x025ec4  Freescale MXS Boot Image
0x025ee0  Invalid OS
0x025efc  netbsd
0x025f04  NetBSD
0x025f10  Enea OSE
0x025f24  Plan 9
0x025f3c  u-boot
0x025f44  U-Boot
0x025f4c  Invalid ARCH
0x025f78  Intel x86
0x025fa4  microblaze
0x025fb0  MicroBlaze
0x025fcc  mips64
0x025fd4  MIPS 64 Bit
0x025fe8  NIOS II
0x025ff0  powerpc
0x025ff8  PowerPC
0x02600c  IBM S390
0x02601c  SuperH
0x026034  sparc64
0x02603c  SPARC 64 Bit
0x02604c  blackfin
0x026058  Blackfin
0x02608c  OpenRISC 1000
0x02609c  sandbox
0x0260a4  Sandbox
0x0260bc  ** Too many args (max. %d) **
0x0260dc  ## Command too long!
0x0260f4  bootdelay
0x026100  bootm 
0x026110  Hit any key to stop autoboot: %2d 
0x026144  <INTERRUPT>
0x026154  serial
0x02615c  not available
0x02616c  (%d:%d) Vendor: %s Prod.: %s Rev: %s
0x026194  Model: %s Firm: %s Ser#: %s
0x0261b4  Vendor: %s Rev: %s Prod: %s
0x0261d4  device type DOC
0x0261e8  device type unknown
0x026200  Unhandled device type: %i
0x02621c              Type: 
0x026230  Removable 
0x02623c  Hard Disk
0x026248  CD ROM
0x026250  Optical Device
0x026268  # %02X #
0x026274              Capacity: %ld.%ld MB = %ld.%ld GB (%ld x %ld)
0x0262b0              Capacity: not available
0x0262d9  Partition Map for 
0x026310  UNKNOWN
0x026318   device %d  --   Partition Type: %s
0x026344  ## Unknown partition table
0x026360  ** Bad device specification %s %s **
0x026388  Sandbox host
0x026398  bootdevice
0x0263a4  ** No device specified **
0x0263c8  ** Bad partition specification %s %s **
0x0263f4  ** Bad device size - %s %s **
0x026414  ** No partition table - %s %s **
0x026438  Whole Disk
0x026444  ** No valid partitions found **
0x026468  ** Invalid partition type "%.32s" (expect "U-Boot")
0x0264bc  ** Can't read partition table on %d:%d **
0x0264e8  bad MBR sector signature 0x%02x%02x
0x026520  %08x-%02x
0x02652a  %02x%s%s
0x026534  hd%c%d
0x02653c  sd%c%d
0x026544  usbd%c%d
0x026550  docd%c%d
0x02655c  xx%c%d
0x026569  Start Sector
0x026576  Num Sectors
0x026590  Status Error: 0x%08X
0x0265a8  Timeout waiting card ready
0x0265c4  MMC Device %d not found
0x0265e0  MMC: block number 0x%lx exceeds max(0x%lx)
0x02660c  mmc fail to send stop cmd
0x026628  Man %06x Snr %04x%04x
0x026640  %c%c%c%c%c%c
0x026658  Card did not respond to voltage select!
0x026684  %s: %d
0x026692  Caution! Your devices Erase group is 0x%x
0x0266bc  The erase range would be change to 0x%lx~0x%lx
0x0266f0  mmc erase failed
0x026704  mmc write failed
0x026718  WARNING in %s line %d
0x026730  rts_mmc.c
0x02673c  nodev:%x
0x026748  card err:%x
0x026758  trans fail:%x
0x026768  wait for PLL stable fail
0x026784  no card exist!
0x026794  rtsmmc
0x02679c  SF: Failed to set up slave
0x0267b8  SF: Failed to get idcodes
0x0267d4  flash status is %x, %x
0x0267ec  flash status is %x, %x, %x
0x026808  flash status is %x
0x02681c  SF: Detected %s with page size 
0x02683c  , erase size 
0x02684c  , total 
0x026858  , mapped at %p
0x026868  SF: Unsupported flash IDs: 
0x026884  manuf %02x, jedec %04x, ext_jedec %04x
0x0268ac  GD25Q64C
0x0268b8  GD25Q128C
0x0268c4  GD25Q256C
0x0268d0  MX25L6433F
0x0268dc  MX25L12835F
0x0268e8  MX25L25635F
0x0268f4  MX25L51245G
0x026900  MX66L1G45G
0x02690c  W25Q64FV
0x026918  W25Q128FV
0x026924  W25Q256FV
0x026930  XM25QH64A
0x02693c  XM25QH128A
0x026948  BY25Q128AS
0x026954  Cannot find console
0x02696c  ## Baudrate %d bps not supported
0x026990  ## Switch baudrate to %d bps and press ENTER ...
0x0269c4  ## Baudrate may not be deleted
0x0269e4  SPI_error: Fail to allocate rlx_spi_slave
0x026a10  spi_flash_wait_busy: transfer error. 
0x026a38  flash_rx_cmd:error when wait busy
0x026a5c  flash_tx_cmd:error when wait busy
0x026a80  flash_set_status:flash_tx_cmd failed
0x026aa8  send channel = %x cmd = %x
0x026ac4  flash_disable_write: flash_tx_cmd wrdi failed
0x026af4  flash_read: spi_flash_wait_busy failed
0x026b1c  flash_write: spi_flash_wait_busy failed
0x026b48  spi: invalid wordlen %d
0x026b64  FAT: Misaligned buffer address (%p)
0x026b8c  FAT32   
0x026b98  FAT12   
0x026ba4  FAT16   
0x026bb0  Invalid FAT entry
0x026bc8  ** Partition %d not valid on device %d **
0x026bf4  Error: FAT sector size mismatch (fs=%hu, dev=%lu)
0x026c28              %s%c
0x026c3c   %8ld   %s%c
0x026c4d  %d file(s), %d dir(s)
0x026c68  Error reading cluster
0x026c80  No current device
0x026c94  Interface:  
0x026ca4  Unknown
0x026cad    Device %d: 
0x026cbd  No valid FAT fs found
0x026cd4  Filesystem: %s "%s"
0x026cec  reading %s
0x026cf8  ** Unable to read file %s **
0x026d1c  Can't list files without a filesystem!
0x026d4c  Can't load file without a filesystem!
0x026d74  ** Unrecognized filesystem type **
0x026d98  ** Unable to write file %s **
0x026db8  ** No boot file defined **
0x026dd4  %d bytes written in %lu ms
0x026df0  %llu Bytes%s
0x026e08   %ciB%s
0x026e18      %s
0x026e28  Error: inflateInit2() returned %d
0x026e4c  Error: inflate() returned %d
0x026e6c  Error: Bad gzipped data
0x026e88  Error: gunzip out of data in header
0x026eb0  ### ERROR ### Please RESET the board ###
0x026edc  ## ERROR: unsupported match method: 0x%02x
0x026f08  Env export buffer too small: %zu, but need %zu
0x026f38  himport_r: can't insert "%s=%s" into hash table
0x026f6c  WARNING: '%s' neither in running nor in imported env!
0x026fa4  WARNING: '%s' not in imported env, deleting it!
0x026fd8  ERROR: Failed to allocate 0x%lx bytes below 0x%lx.
0x027010  .%03ld
0x027018  <NULL>
0x027020  %s:%u: %s: Assertion `%s' failed.
0x02704c  invalid distance too far back
0x02706c  invalid distance code
0x027084  invalid literal/length code
0x0270a0  incorrect header check
0x0270b8  unknown compression method
0x0270d4  invalid window size
0x0270e8  unknown header flags set
0x027104  header crc mismatch
0x027118  invalid block type
0x02712c  invalid stored block lengths
0x02714c  too many length or distance symbols
0x027170  invalid code lengths set
0x02718c  invalid bit length repeat
0x0271a8  invalid literal/lengths set
0x0271c4  invalid distances set
0x0271dc  incorrect data check
0x0271f4  incorrect length check
0x02720c  need dictionary
0x02721c  stream end
0x027228  file error
0x027234  stream error
0x027244  data error
0x027250  insufficient memory
0x027264  buffer error
0x027274  incompatible version
0x02728c          
0x027298  U-Boot 2014.01-v1.2 (May 22 2019 - 14:48:02)
0x0272fc  rlxboard_serial
0x02732c  [addr [arg ...]]
0x02733d      - boot application image stored in memory
0x02736c  passing arguments 'arg ...'; when booting a Linux kernel,
0x0273a7  'arg' can be the address of an initrd image
0x0273d4  Sub-commands to do part of the bootm sequence.  The sub-commands must be
0x02741d  issued in the order below (it's ok to not issue all sub-commands):
0x027461  start [addr [arg ...]]
0x027479  loados  - load OS image
0x027492  ramdisk - relocate initrd, set env initrd_start/initrd_end
0x0274ce  cmdline - OS specific command line processing/setup
0x027503  bdt     - OS specific bd_t processing
0x02752a  prep    - OS specific prep before relocation or go
0x02755e  go      - start OS
0x0276a8  default [-f] -a - [forcibly] reset default environment
0x0276df  env default [-f] var [...] - [forcibly] reset variable(s) to their default values
0x027731  env delete [-f] var [...] - [forcibly] delete variable(s)
0x02776b  env edit name - edit environment variable
0x027795  env export [-t | -b | -c] [-s size] addr [var ...] - export environment
0x0277dd  env import [-d] [-t | -b | -c] addr [size] - import environment
0x02781d  env print [-a | name ...] - print environment
0x02784b  env set [-f] name [arg ...]
0x027940  [addr]
0x027948  - run script starting at addr
0x027967  - A valid image header must be present
0x027990  addr part [dest]
0x0279a1      - extract <part> from legacy image at <addr> and copy to <dest>
```
</details>
