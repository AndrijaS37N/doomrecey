/* 
Created by Andrija Djuric on 5/25/19
Copyright © 2019 Andrija Djuric. All rights reserved? 😉
Using Xcode & VS Code with Code Runner, GCC & IntelliSense
*/

#include <stdio.h>
#include "simple_io.h"

// gcc ${array_of_files} -o doomrecey

int main(int argc, const char *argv[])
{
    log_integer();
    log_double();
    log_float();

    log_static_string();
    
    // some console colors
    printf("\033[0m\nSETTING COLORS");
    printf("\033[0;31m\nRED");
    printf("\033[0;34m\nBLUE");
    printf("\033[0;32m\nGREEN");
    printf("\033[0;33m\nYELLOW");
    printf("\033[0;36m\nCYAN");
    // for bold colors use 1 instead of 0, like this [1;31m
    printf("\033[0m\nRESET COLORS");

    printf("\nEnd message: \033[1;32mHello, World!\n");
    return 0;

    /* References: 
    A* REF https://rosettacode.org/wiki/A*_search_algorithm
    */
}
