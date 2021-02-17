cmake_minimum_required(VERSION 3.17)
project(LinkedList)

set(CMAKE_CXX_STANDARD 14)

include_directories(Project1)

add_executable(LinkedList
        Project1/LinkedList.h
        Project1/Source.cpp
        Project1/test.txt)
