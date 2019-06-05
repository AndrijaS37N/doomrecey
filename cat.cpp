#include <iostream>
#include "animal.hpp"
#include "cat.hpp"

// it didn't work because I had the header files in the wrong order of import, like shown below
// #include "cat.hpp"
// #include "animal.hpp"

std::string Cat::make_sound(std::string sound_made)
{
    std::cout << '\n';
    std::cin.ignore();
    std::string base_string = ", meow, !";
    std::string additional_sound;
    std::cout << "Cat make_sound() input: ";

    // example with getline() for getting the input with spaces
    std::getline(std::cin, additional_sound);
    // std::cin >> additional_sound;

    std::cout << "Cat make_sound() output: ";
    sound_made += base_string.substr(0, base_string.length() - 2) + " " + additional_sound + base_string.at(base_string.length() - 1);
    return sound_made;
}