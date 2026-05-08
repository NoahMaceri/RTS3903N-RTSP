cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(isp_ctrl
        ${CMAKE_CURRENT_SOURCE_DIR}/isp_ctrl.cpp
)
target_link_libraries(isp_ctrl PRIVATE
        zlog_s
        rtscore
)
