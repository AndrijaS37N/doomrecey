#include <iostream>
#include "husky.hpp"

int Husky::waffle_count = 0;

void Husky::add_extra_waffles(int waffle_count)
{
    srand(time(NULL));
    int added_waffles = rand() % 10 + 1;
    std::cout << "Husky: I'll add " << added_waffles << " more waffle/waffles!\n";
    Husky::waffle_count = waffle_count + added_waffles;
}

Husky::Husky(int waffle_count)
{
    std::cout << "A new husky is adding 1 waffle to the already brought amount of " << waffle_count << "...\n";
    waffle_count++;
    std::cout << "And some hidden, unknown number of waffles...\n";
    add_extra_waffles(waffle_count);
}

void Husky::eat_waffle()
{
    std::cout << "Husky: Eating waffle...\n";
    waffle_count--;
}