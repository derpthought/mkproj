cmake_minimum_required(VERSION 3.5)
project(mkproj)

set(INCLUDE /opt/src/c++/include)
include_directories(${INCLUDE})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -O3 -march=native")

#set(HEADERS ${INCLUDE})

set(SOURCE_FILES main.cpp)
add_executable(mkproj ${SOURCE_FILES})