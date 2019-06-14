#ifndef part_two_linker_hpp
#define part_two_linker_hpp

#include "more_functions.hpp"
#include "yawn.hpp"
#include "malamute.hpp"
#include "husky.hpp"

// MME AWARD, 'Most Moronic Error Award' goes to 🥇-> Undefined symbols for architecture x86_64: -> DON'T forget to compile newly created .cpp files!

void activate_part_two()
{
    // let's say there's 3 extra waffles
    Husky husky(3);
    Malamute malamute;

    // let's add 3 yawns
    std::cout << "Yawns loop:\n";
    for (int i = 0; i < 3; i++)
    {
        Yawn yawn(1.2, ("Yawn #" + std::to_string(i + 1)));
        yawn.set_duration(3.6);
        std::cout << "Get sound made string: " << yawn.get_sound_made() << "\nGet duration double: " << yawn.get_duration() << '\n';
        malamute.add_yawn(yawn);
    }

    husky.print_global_avarage_barks();
    std::cout << "Print current waffle count: " << Husky::waffle_count << '\n';

    std::cout << "Eat a waffle let's say 3 times (while loop):\n";
    int loop = 0;
    while (loop < 3)
    {
        husky.eat_waffle();
        loop++;
    }

    std::cout << "Print current waffle count: " << Husky::waffle_count << '\n';
    malamute.print_global_avarage_barks();
    malamute.print_yawns();

    MoreFunctions more_functions;
    more_functions.printing_sizeofs();
    int a = 4;
    std::cout << "Passings: n = " << a << '\n';
    more_functions.passing_by_pointer(&a);
    std::cout << "Passings: n = " << a << " (after the value at the passed pointer was raised by 1)\n";
    std::cout << "Passings: n = " << more_functions.copy_passing_by_pointer(&a) << " (after returning a int raised by 1)\n";

    LinkedList linked_list;

    for (int i = 0; i < 4; i++)
        linked_list.push_element("Element #" + std::to_string(i));

    linked_list.print_linked_list();
    linked_list.reverse();
    std::cout << "Reversing linked list (void recursive reverse)...\n";
    linked_list.void_recursive_reverse(&linked_list.head);
    std::cout << "Reversing linked list (node return recursive reverse)...\n";
    linked_list.recursive_reverse(linked_list.head);
    linked_list.print_linked_list();

    std::cout << std::endl;
    more_functions.call_print_letter_array();
    std::cout << std::endl;
    more_functions.print_std_array();
    std::cout << std::endl;
    more_functions.matrix_print_A_static();
    std::cout << std::endl;
    more_functions.matrix_print_A_dynamic();

    // WIPs
}

#endif /* part_two_linker_hpp */