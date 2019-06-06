cmake_minimum_required(VERSION 3.14.5)
project(doomrecey)

# for the doomrecey 'C' part of the project use this: 
add_executable(doomrecey main.c simple_io.c)
# add_executable(doomrecey++ main.cpp simple_io.cpp intermediate_io.cpp animal.cpp dog.cpp cat.cpp)

# for the 'C++' part (the overrides are from C++11)
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")