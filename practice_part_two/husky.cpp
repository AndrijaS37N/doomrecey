#include <iostream>
#include "husky.hpp"

int Husky::waffles_eaten = 0;

void print_waffle_count()
{
    std::cout << "Husky is looking at the waffle count (static int): " << static_waffle_count << '\n';
}

void add_waffles(int waffle_count)
{
    int added_waffles = rand() % 10 + 1;
    std::cout << "I'll add " << added_waffles << " more waffles!\n";
    waffle_count = +added_waffles;
}

Husky::Husky(int waffle_count)
{
    add_waffles(waffle_count);
    static_waffle_count = waffle_count;
}

void eat_waffle()
{
    std::cout << "Eating waffle...\n";
    static_waffle_count--;
    Husky::waffles_eaten++;
    std::cout << Husky::waffles_eaten << " waffles eaten\n";
}