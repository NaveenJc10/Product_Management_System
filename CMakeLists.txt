cmake_minimum_required(VERSION 3.20)
project(DOP1254_Assignment_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(DOP1254_Assignment_2
        Driver.cpp
        Function.h
        Product.h
        Table.h)
