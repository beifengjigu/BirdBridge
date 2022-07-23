cmake_minimum_required(VERSION 3.16)
project(BirdBridge)

include_directories(include)
aux_source_directory(src)
CMAKE_CXX_COMPILER(gcc)
CMAKE_CXX_FLAGS("-lssl -lcrypto")