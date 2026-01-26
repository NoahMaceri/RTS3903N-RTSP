cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# imager_streamer
add_executable(imager_streamer
        ${CMAKE_CURRENT_SOURCE_DIR}/imager_streamer.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/day_night_ctrl.cpp
)
target_link_libraries(imager_streamer PRIVATE
        zlog_s
        rtscore
)
