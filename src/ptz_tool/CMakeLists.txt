cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# imager_streamer
add_executable(ptz_tool
        ${CMAKE_CURRENT_SOURCE_DIR}/ptz_tool.cpp
)
target_link_libraries(ptz_tool PRIVATE
        zlog_s
        rtscore
)
