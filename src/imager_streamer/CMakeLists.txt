cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# imager_streamer is now also the RTSP frontend — live555 lives in-process.
# The standalone src/rtsp_server binary was deleted; rtsp_worker.cpp owns
# the TaskScheduler/UsageEnvironment/RTSPServer and runs the event loop.
add_executable(imager_streamer
        ${CMAKE_CURRENT_SOURCE_DIR}/imager_streamer.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/day_night_ctrl.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/isp_utils.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/rtsp_worker.cpp
)
target_link_libraries(imager_streamer PRIVATE
        zlog_s
        rtscore
        liveMedia
        BasicUsageEnvironment
        UsageEnvironment
        groupsock
)
