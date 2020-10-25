cmake_minimum_required(VERSION 3.16)
project(heck)

set(CMAKE_CXX_STANDARD 20)

add_executable(heck main.cpp src/File.h src/Heck.h src/Str.h)
