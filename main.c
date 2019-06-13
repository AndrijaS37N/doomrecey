#include "practice_part_one/part_one_linker.h"
#include <stdlib.h>

void cyan_input(const char *input)
{
    printf("\033[1;36m%s\033[0m\n", input);
}

int main(int argc, const char *argv[])
{
    system("clear");
    cyan_input("PRACTICE PART #1 IN C 🧤");
    activate_part_one();
    
    return 0;
}