cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ptz_tool
        ${CMAKE_CURRENT_SOURCE_DIR}/ptz_tool.cpp
)
target_include_directories(ptz_tool PRIVATE
        ${CMAKE_SOURCE_DIR}/src/common
)
