#ifndef part_two_linker_hpp
#define part_two_linker_hpp

#include "yawn.hpp"
#include "malamute.hpp"
#include "husky.hpp"

// Undefined symbols for architecture x86_64: -> DON'T forget to compile new .cpp files!

void activate_part_two()
{
    // let's say there's 3 extra waffles
    Husky husky(3);
    Malamute malamute;

    // we'll pass this to the malamute
    std::vector<Yawn> yawns;

    // let's add 3 yawns
    for (double i = 0; i < 3; i++)
    {
        Yawn yawn(1.2, "Yawn");
        yawn.set_duration(3.6);
        std::cout << "Get sound made string: " << yawn.get_sound_made() << "\nGet duration double: " << yawn.get_duration() << '\n';

        // TODO -> add a add_yawn() function here instead of set_yawns (malamute)

        yawns.emplace_back(yawn);
        // std::cout << "Yawn: " << yawns[i].get_duration() << " | " << yawns[i].get_sound_made() << '\n';
    }

    husky.print_global_avarage_barks();
    std::cout << "Print current waffle count: " << Husky::waffle_count << '\n';
    husky.eat_waffle();
    std::cout << "Print current waffle count: " << Husky::waffle_count << '\n';
    malamute.print_global_avarage_barks();
    malamute.set_yawns(yawns);

    // WIP
}

#endif /* part_two_linker_hpp */