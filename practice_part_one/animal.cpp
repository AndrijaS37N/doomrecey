#include <iostream>
#include <string>
#include "animal.hpp"

void Animal::print_class_name(Animal *a_class)
{
    std::cout << a_class->get_class_name() << std::endl;
}
