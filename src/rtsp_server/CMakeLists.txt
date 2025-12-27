cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# imager_streamer
add_executable(rtsp_server
        ${CMAKE_CURRENT_SOURCE_DIR}/rtsp_server.cpp
)
target_link_libraries(rtsp_server PRIVATE
        zlog_s
        liveMedia
        BasicUsageEnvironment
        UsageEnvironment
        groupsock
)
