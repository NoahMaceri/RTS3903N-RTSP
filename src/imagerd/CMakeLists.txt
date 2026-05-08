cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# imagerd — the central camera daemon: ISP/H.264/G.711 capture, in-process
# live555 RTSP server (rtsp_worker.cpp), snapshot UDS, IR cut control, and
# the auto-tune loop. Replaces the old imager_streamer + rtsp_server pair.
add_executable(imagerd
        ${CMAKE_CURRENT_SOURCE_DIR}/imagerd.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/day_night_ctrl.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/auto_tune_ctrl.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/isp_utils.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/rtsp_worker.cpp
)
target_link_libraries(imagerd PRIVATE
        zlog_s
        rtscore
        liveMedia
        BasicUsageEnvironment
        UsageEnvironment
        groupsock
)
