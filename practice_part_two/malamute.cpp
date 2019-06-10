#include <iostream>
#include "yawn.hpp"
#include "malamute.hpp"
#include <vector>

void Malamute::print_waffle_count()
{
    std::cout << "Malamute is looking at the waffle count (with extern): " << Malamute::print_waffle_count << '\n';
}

void Malamute::print_yawns_list()
{
   // get_yawns_list().size() = yawns_list.size()
   for (size_t i = 0; i < yawns_list.size(); i++)
       std::cout << "Yawns list #" << i << " duration = " << yawns_list[i].get_duration() << " and sound made = " << yawns_list[i].get_sound_made();
}

void Malamute::add_yawn(Yawn yawn)
{
    std::cout << "Push back a yawn to yawns list...";
    this->yawns_list.push_back(yawn);
}