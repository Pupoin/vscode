cmake_minimum_required(VERSION 3.0.0)
project(hello VERSION 0.1.0)
SET(CMAKE_BUILD_TYPE "Debug")

include_directories(/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/System/Library/Frameworks)

add_executable(hello helloworld.cpp)


