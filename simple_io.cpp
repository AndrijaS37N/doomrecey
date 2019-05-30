#include <iostream>
#include "simple_io.hpp"

int SimpleIO::call_hello_world()
{
    print_hello_world();
    return 0;
}

void SimpleIO::print_hello_world()
{
    // with some C style printing
    printf("\033[0;32m");
    std::cout << "Hello World!";
    printf("\033[0m");
    printf("\033[1;36m");
    std::cout << "\nNice!" << std::endl;
    printf("\033[0m");
}

int SimpleIO::factorial(int number)
{
    int i = 0;
    int result = 1;
    while((number - i) > 0)
    {
        result = result * (number - i);
        i++;
    }
    return result;
}