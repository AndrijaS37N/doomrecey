#include "practice_part_one/part_one_linker.hpp"
#include "practice_part_two/part_two_linker.hpp"
#include "practice_part_three/part_three_linker.hpp"

void cyan_input(const std::string &input)
{
    std::cout << "\033[1;36m" << input << "\033[0m\n";
}

void yellow_input(const std::string &input)
{
    std::cout << "\033[1;33m" << input << "\033[0m\n";
}

int main(int argc, const char *argv[])
{
    system("clear");

    // cyan_input("PRACTICE PART #1 IN C++ 🧤");
    // activate_part_one();

    // cyan_input("PRACTICE PART #2 IN C++ 🧤");
    // activate_part_two();

    // cyan_input("PRACTICE PART #3 IN C++ 🧤");
    // activate_part_three();

    yellow_input("Closing this C/C++ playground!");

    return 0;
}
