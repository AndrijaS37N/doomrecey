#include <iostream>
#include "animal.hpp"
#include "cat.hpp"

// it didn't work because I had the header files in the wrong order of import, like shown below
// #include "cat.hpp"
// #include "animal.hpp"

std::string Cat::make_sound(std::string sound_made)
{
    std::string additional_sound;
    std::cout << "Cat make_sound() input: ";
    std::cin >> additional_sound;
    std::cout << "Cat make_sound() output: ";
    sound_made += ", meow, " + additional_sound + "!";
    return sound_made;
}