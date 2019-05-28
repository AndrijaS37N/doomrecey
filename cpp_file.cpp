#include <iostream>
#include "cpp_file.hpp"

void CppFile::cpp_main()
{
    printf("\033[0;32m");
    std::cout << "Hello World!";
    printf("\033[0m");
}