#include <iostream>
#include "cpp_file.hpp"

int main()
{
    CppFile test;
    std::cout << "CPP end message: ";
    printf("\033[0;32m\n");
    test.cpp_main();
    printf("\033[0m\n");
    return 0;
}