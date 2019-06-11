#include <iostream>
#include "more_functions.hpp"

void MoreFunctions::printing_sizeofs()
{
    std::cout << "\nSIZEOF\n";
    int integer;
    int *integer_ptr;
    int **integer_ptr_ptr;

    std::cout << "sizeof(integer) = " << sizeof(integer) << " | integer = " << integer << '\n';
    std::cout << "sizeof(integer_ptr) = " << sizeof(integer_ptr) << " | integer_ptr = " << integer_ptr << '\n';
    std::cout << "sizeof(integer_ptr_ptr) = " << sizeof(integer_ptr_ptr) << " | integer_ptr_ptr = " << integer_ptr_ptr << '\n';
    std::cout << "sizeof(&integer) = " << sizeof(&integer) << " | &integer = " << &integer << '\n';
    std::cout << "sizeof(&integer_ptr) = " << sizeof(&integer_ptr) << " | &integer_ptr = " << &integer_ptr << '\n';
    std::cout << "sizeof(&integer_ptr_ptr) = " << sizeof(&integer_ptr_ptr) << " | &integer_ptr_ptr = " << &integer_ptr_ptr << '\n';

    std::cout << "segfault -> sizeof(*integer_ptr) | *integer_ptr\n";
    // segfault -> std::cout << "sizeof(*integer_ptr) = " << sizeof(*integer_ptr) << " | *integer_ptr = " << *integer_ptr << '\n';

    std::cout << "segfault -> sizeof(**integer_ptr_ptr) | **integer_ptr_ptr\n";
    // segfault -> std::cout << "sizeof(**integer_ptr_ptr) = " << sizeof(**integer_ptr_ptr) << " | **integer_ptr_ptr = " << **integer_ptr_ptr << '\n';

    std::cout << "sizeof(&(*integer_ptr)) = " << sizeof(&(*integer_ptr)) << " | &(*integer_ptr) = " << &(*integer_ptr) << '\n';
}

void MoreFunctions::passing_by_pointer(int *number)
{
    *number += 1;
}

int MoreFunctions::return_passing_by_pointer(int *number)
{
    // let's return a local variable
    int number_copy;
    *number += 1;
    number_copy = *number;
    return number_copy;
}