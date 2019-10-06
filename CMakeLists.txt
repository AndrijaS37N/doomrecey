cmake_minimum_required(VERSION 3.14.5)
project(doomrecey)

# 🚧 Note: Redundant adding of 'practice_part_one/' & 'practice_part_two/' .. for now! 🚧

# for the doomrecey part of the project use this 👇
# add_executable(doomrecey main.c practice_part_one/simple_io.c)

# for the doomrecey++ part of the project use this 👇
add_executable(
    doomrecey++ 
    main.cpp 
    practice_part_one/simple_io.cpp 
    practice_part_one/intermediate_io.cpp 
    practice_part_one/animal.cpp 
    practice_part_one/dog.cpp 
    practice_part_one/cat.cpp
    practice_part_two/husky.cpp
    practice_part_two/malamute.cpp
    practice_part_two/yawn.cpp
    practice_part_two/more_functions.cpp
    practice_part_three/alpha.cpp
)

# for the 'C++' part ('overrides' are from C++ 11) use this flag
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")