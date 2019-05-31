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
    // std::cout << "Factorial of " << number << " is:" << io_test.factorial(4) << std::endl;
    printf("%i! is %i\n", number, io_test.factorial(number));
    printf("%i! is %i\n", number, io_test.recursive_factorial(number, 1));
    printf("%i! is %i\n", number, io_test.optimised_recursive_factorial(number));

    std::string word;
    std::cout << "Check if palindrome (string): ";
    std::cin >> word;
    std::cout << "Check if palindrome (int): ";
    int num;
    std::cin >> num;

    std::cout << "Palindrome string (1 = true, 0 = false): " << io_test.palindrome_string(word) << std::endl;
    std::cout << "Palindrome number (1 = true, 0 = false): " << io_test.palindrome_number(num) << std::endl;

    // WIP
    return 0;
}
