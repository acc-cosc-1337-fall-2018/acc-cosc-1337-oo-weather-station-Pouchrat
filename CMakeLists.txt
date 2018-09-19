cmake_minimum_required(VERSION 3.8)
project(ooad-weather-station)

set(CMAKE_CXX_STANDARD 11)

include_directories(src)

add_subdirectory(test)
add_subdirectory(src)
