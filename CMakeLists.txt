cmake_minimum_required(VERSION 3.10)
project(LintCode)

set(CMAKE_CXX_STANDARD 11)

add_executable(LintCode main.cpp
        Sort/Solution508/Solution508.cpp Sort/Solution508/Solution508.h
        Bit/Solution001/Solution001.cpp Bit/Solution001/Solution001.h
        Math/Solution002/Solution002.cpp Math/Solution002/Solution002.h)