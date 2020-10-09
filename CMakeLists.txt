cmake_minimum_required(VERSION 2.4)

project(hello_world)

SET(codes ${SHA256.cpp} ${SHA256.h})
SOURCE_GROUP(foos FILES ${codes})

add_executable(app SHA256.cpp)