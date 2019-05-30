#include <iostream>
#include "simple_io.hpp"

int main()
{
    SimpleIO io_test;
    std::cout << "CPP messages:" << std::endl;
    
    io_test.call_hello_world();

    int number;
    std::cout << "Calculate factorial of the number: ";
    std::cin >> number;
    // std::cout << "Factorial of " << number << " is:"<< io_test.factorial(4) << std::endl;
    printf("%i! is %i\n", number, io_test.factorial(number));
    printf("%i! is %i\n", number, io_test.recursive_factorial(number, 1));
    printf("%i! is %i\n", number, io_test.optimised_recursive_factorial(number));

    return 0;
}