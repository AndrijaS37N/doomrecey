#include <iostream>
#include "yawn.hpp"
#include "malamute.hpp"

void Malamute::add_yawn(Yawn yawn)
{
    std::cout << "Yawn: Adding yawn...\n";
    yawns.emplace_back(yawn);
}

void Malamute::print_yawns()
{
    std::cout << "Yawns printed:\n";
    for (size_t i = 0; i < yawns.size(); i++)
        std::cout << yawns[i].get_duration() << " | '" << yawns[i].get_sound_made() << "'\n";
}