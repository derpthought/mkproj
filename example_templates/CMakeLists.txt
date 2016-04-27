cmake_minimum_required(VERSION 3.5)
project(CHANGE_NAME)

set(INCLUDE /opt/src/c++/include)
include_directories(${INCLUDE})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -O3 -march=native")

set(HEADERS ${INCLUDE}/range.hpp)

set(SOURCE_FILES main.cpp ${HEADERS})
add_executable(CHANGE_NAME ${SOURCE_FILES})