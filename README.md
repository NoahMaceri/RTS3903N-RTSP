# RTSP server for RTS3903N based Cameras
This work is based on Colin Jensen's [Yi-RTS3903N-RTSPServer](https://github.com/cjj25/Yi-RTS3903N-RTSPServer)

## Background
**Important**: This method doesn't overwrite the existing flash, simply remove the SD card, and the 'hack' will be disabled.

## Getting Started
_TODO_

## Features
- H264 encoded stream via `rtsp://[YOUR_CAMERA_IP]/[rtsp_name]`
- Telnet server enabled
- Configuration of camera parameters via `streamer.ini`

### In-progress
- Add audio to the feed

### Planned
- ONVIF

## Compiling
For Ubuntu 20.*
```
# Install dependancies
sudo bash install_deps_ubuntu.sh
mkdir build
cmake -S . -B ./build
cd build
ninja
```

## Streaming configuration
Many imager and RTSP settings are provided in the `streamer.ini`

The range of the parameters are provided at the end of the line comment in the format [min-max,step] \
_This range is based on my camera, it might be different for yours!_
```ini
[isp]
; This file contains the ISP settings for the camera module.
; Adjust the settings below to configure the ISP parameters.
noise_reduction=4 ; Adjusts the noise reduction strength [0-7,1]
ldc=1 ; Lens distorion correction [0-1,1]
detail_enhancement=4 ; Adjusts the detail enhancement strenth [0-7,1]
three_dnr=1 ; 3D noise reduction [0-1,1]
mirror=1 ; Mirror image [0-1,1]
flip=1 ; Flip image [0-1,1]
in_out_door_mode=0 ; Indoor/outdoor mode [0-2,1]
dehaze=0 ; Dehaze [0-1,1]
; The adc_cutoff value is used to adjust when night mode is activated.
adc_cutoff=400 ; Lit values start around 200 and lower
adc_cutoff_inverted=2750 ; Lit values start around 3000 and higher
invert_ir_cut=0 ; Invert the IR cut logic

[encoder]
; This section contains settings for the video encoder.
max_bitrate=1024000 ; Max bitrate of the encoder
min_bitrate=512000 ; Minimum bitrate of the encoder
width=1920 ; Resolution of the encoder
height=1080 ; Resolution of the encoder
fps=20 ; FPS of the imager + encoder (I have noticed that most cameras can not effectively reach 30 FPS)

[rtsp]
; RTSP settings for the camera stream.
; You can leave the user and password empty for no authentication.
username= ; Username for RTSP server
password= ; Password for RTSP server
port=554 ; Port for RTSP server
name=ch0_0.h264 ; URL for RTSP server (rtsp://[YOUR_CAMERA_IP]/[name])
```

## Troubleshooting
The RTS3903N uses an ADC for sensing light. On some cameras the logic is inverted and must be set in the `streamer.ini`

## Version history
### 0.4.0
- Created ISP adjustment tool
- Update config parsing
- Updated default streamer.ini
### 0.3.1
- Added more parameters to `streamer.ini`, updated README
### 0.3.0
- Forked from source repo, INI configuration support added, build system changed to CMake + Ninja, tweaked imager streamer for better stability

## Credit
- rtsp_server
  - [`@roleoroleo`](https://github.com/roleoroleo): Original author
  - [`@alienatedsec`](https://github.com/alienatedsec/): Modified version
  - [`@cjj25`](https://github.com/cjj25): Modified version
- imager_stremaer
  - [`Realtek`](https://www.realtek.com/): rt_stream examples 
  - [`@cjj25`](https://github.com/cjj25): Original author
- sd_payload 
  - [`@rage2dev`](https://github.com/rage2dev/): Original author
  - [`@cjj25`](https://github.com/cjj25): Modified version

## Resources
- [Compiled binaries/tools for debugging and test](https://github.com/cjj25/RTS3903N-Tools)
