#include <iostream>
#include "alpha.hpp"

unsigned long long int Alpha::s_var = 82804;

void Printer::printSizes()
{
    std::cout << "Alpha: " << sizeof(Alpha) << std::endl;
    std::cout << "Beta: " << sizeof(Beta) << std::endl;
    std::cout << "Printer: " << sizeof(Printer) << std::endl;
    std::cout << "s_var: " << Alpha::s_var << std::endl;
    std::cout << "s_var size: " << sizeof(Alpha::s_var) << std::endl;
    std::cout << "X class: " << sizeof(X) << std::endl;
    std::cout << "Y class: " << sizeof(Y) << std::endl;
}