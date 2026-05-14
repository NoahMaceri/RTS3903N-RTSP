cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(live)

# if the zip is not present, download it
if(NOT EXISTS "${CMAKE_CURRENT_BINARY_DIR}/live555-master.zip")
    message(STATUS "Downloading live source version ${SOURCE_VER}")
    file(DOWNLOAD
            "https://github.com/rgaufman/live555/archive/refs/heads/master.zip"
            "${CMAKE_CURRENT_BINARY_DIR}/live555-master.zip"
            SHOW_PROGRESS
    )
    message(STATUS "Download complete")
endif()

# Extract the source code
if(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/live")
    message(STATUS "Extracting live source")
    file(ARCHIVE_EXTRACT
            INPUT "${CMAKE_CURRENT_BINARY_DIR}/live555-master.zip"
            DESTINATION "${CMAKE_CURRENT_SOURCE_DIR}"
    )
    file(RENAME
            "${CMAKE_CURRENT_SOURCE_DIR}/live555-master"
            "${CMAKE_CURRENT_SOURCE_DIR}/live"
    )
    message(STATUS "Extraction complete")
endif()

add_library(compiler_flags INTERFACE)
target_compile_options(compiler_flags INTERFACE
        -O1
)
target_compile_definitions(compiler_flags INTERFACE
    -DNO_STD_LIB
    -DBSD=1
    -DUSE_SYSTEM_RANDOM
    -DSOCKLEN_T=socklen_t
    -D_LARGEFILE_SOURCE=1
    -D_FILE_OFFSET_BITS=64
    -DNO_OPENSSL=1
    -DNEWLOCALE_NOT_USED
    -DALLOW_RTSP_SERVER_PORT_REUSE=1
)

set(all_include_dirs
    "${CMAKE_CURRENT_SOURCE_DIR}/live/UsageEnvironment/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/live/BasicUsageEnvironment/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/live/groupsock/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/live/liveMedia/include"
)

file(GLOB BASIC_USAGE_ENVIRONMENT_SRCS ${CMAKE_CURRENT_SOURCE_DIR}/live/BasicUsageEnvironment/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/live/BasicUsageEnvironment/*.c)
add_library(BasicUsageEnvironment SHARED ${BASIC_USAGE_ENVIRONMENT_SRCS})
target_include_directories(BasicUsageEnvironment PUBLIC ${all_include_dirs})
target_link_libraries(BasicUsageEnvironment PUBLIC compiler_flags)

file(GLOB USAGE_ENVIRONMENT_SRCS ${CMAKE_CURRENT_SOURCE_DIR}/live/UsageEnvironment/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/live/UsageEnvironment/*.c)
add_library(UsageEnvironment SHARED ${USAGE_ENVIRONMENT_SRCS})
target_include_directories(UsageEnvironment PUBLIC ${all_include_dirs})
target_link_libraries(UsageEnvironment PUBLIC compiler_flags)

file(GLOB GROUPSOCK_SRCS ${CMAKE_CURRENT_SOURCE_DIR}/live/groupsock/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/live/groupsock/*.c)
add_library(groupsock SHARED ${GROUPSOCK_SRCS})
target_include_directories(groupsock PUBLIC ${all_include_dirs})
target_link_libraries(groupsock PUBLIC compiler_flags)

file(GLOB LIVEMEDIA_SRCS ${CMAKE_CURRENT_SOURCE_DIR}/live/liveMedia/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/live/liveMedia/*.c)
add_library(liveMedia SHARED ${LIVEMEDIA_SRCS})
target_include_directories(liveMedia PUBLIC ${all_include_dirs})
target_link_libraries(liveMedia PUBLIC compiler_flags)

add_executable(openRTSP
        ${CMAKE_CURRENT_SOURCE_DIR}/live/testProgs/playCommon.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/live/testProgs/openRTSP.cpp
)
target_link_libraries(openRTSP
        liveMedia
        groupsock
        UsageEnvironment
        BasicUsageEnvironment
        compiler_flags
)