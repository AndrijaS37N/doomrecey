#include <iostream>
#include "animal.hpp"
#include "dog.hpp"

// pure virtual function definition for the Dog class
std::string Dog::make_sound(std::string sound_made)
{
    std::string additional_sound;
    std::cout << "Dog make_sound() input: ";
    std::cin >> additional_sound;
    std::cout << "Dog make_sound() output: ";
    sound_made += ", bark, " + additional_sound + "!";
    return sound_made;
}