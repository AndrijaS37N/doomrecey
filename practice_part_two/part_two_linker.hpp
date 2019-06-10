#ifndef part_two_linker_hpp
#define part_two_linker_hpp

#include "yawn.hpp"
#include "husky.hpp"
#include <vector>
#include "malamute.hpp"

void activate_part_two()
{
    // Husky husky(3);
    Malamute malamute;

    std::vector<Yawn> yawns;

    // let's add 3 yawns
    for (double i = 0; i < 3; i++)
    {
        Yawn yawn(1.2, "Yawn");
        // checking the setter
        yawn.set_duration(3.6);
        std::cout << "Get sound made string: " << yawn.get_sound_made() << "\nGet duration double: " << yawn.get_duration() << '\n';

        malamute.add_yawn(yawn);

        yawns.emplace_back(yawn);

        // malamute.print_yawns_list();

        // husky.add_waffles(5);
        // husky.print_waffle_count();
        // husky.eat_waffle();
        // husky.print_waffle_count();
        // malamute.print_waffle_count();
    }

    // WIP
}

#endif /* part_two_linker_hpp */