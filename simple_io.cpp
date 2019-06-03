#include <iostream>
#include <string>
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
    while ((number - i) > 0)
    {
        result = result * (number - i);
        i++;
    }
    return result;
}

int SimpleIO::recursive_factorial(int number, int result)
{
    if (number > 0)
    {
        result = result * number;
        return recursive_factorial(number - 1, result);
    }
    else
        return result;
}

int SimpleIO::optimised_recursive_factorial(int number)
{
    if ((number == 0) || (number == 1))
        return 1;
    else
        return number * optimised_recursive_factorial(number - 1);
}

bool SimpleIO::palindrome_string(std::string word)
{
    // let's use size_t
    size_t i;
    size_t j = word.length() - 1;

    for (i = 0; i <= j; i++, j--)
        if (word.at(i) != word.at(j))
            return false;

    return true;
}

bool SimpleIO::palindrome_number(int number)
{
    int reversed = 0;
    int remainder;
    // temporary buffer to be used for popping off remainders
    int buffer = number;

    // example with do while
    do
    {
        // popped digit
        remainder = buffer % 10;
        reversed = (reversed * 10) + remainder;
        buffer = buffer / 10;
    } while (buffer != 0);

    return (number == reversed) ? true : false;
}

void SimpleIO::divising()
{
    int first, second;

    std::cout << "Divising: Enter int a and int b: ";
    std::cin >> first >> second;

    if (first % second == 0)
        std::cout << "First number " << first << " is divisible by the second number " << second << std::endl;
    else
        std::cout << "First number " << first << " is not divisible by the second number " << second << std::endl;
}

void SimpleIO::is_prime()
{
    int n;
    bool is_prime = true;

    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
        std::cout << "Output: This is a prime number" << std::endl;
    else
        std::cout << "Output: This is not a prime number" << std::endl;
}

int SimpleIO::calculate_fibonacci(int n)
{
    if (n < 2)
        return n;
    else
        return (calculate_fibonacci(n - 1) + calculate_fibonacci(n - 2));
}