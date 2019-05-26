//
//  main.c
//  doomrecey
//
//  Created by Andrija Djuric on 5/25/19.
//  Copyright © 2019 Andrija Djuric. All rights reserved? 😉
//  Using Xcode & VS Code with Code Runner, GCC & IntelliSense

#include <stdio.h>

int main(int argc, const char *argv[])
{
    //    int integer_var;
    //    double double_var;
    //    float float_var;
    //
    //    printf("Enter integer variable: ");
    //    scanf("%i", &integer_var);
    //    printf("Enter double variable: ");
    //    scanf("%lf", &double_var);
    //    printf("Enter float variable: ");
    //    scanf("%f", &float_var);
    //
    //    printf("Entered: %i | %lf | %f", integer_var, double_var, float_var);

    //    char char_array[10];
    //
    //    printf("Enter char array variable: ");
    //    scanf("%s", char_array);
    //    printf("Entered char array variable: %s", char_array);

    //    printf("Enter char array variable: ");
    //    fgets(char_array, 10, stdin);
    //    printf("%s", char_array);

    // A* REF https://rosettacode.org/wiki/A*_search_algorithm

    // some console colors
    printf("\033[0;31m\nRED");
    printf("\033[0;34m\nBLUE");
    printf("\033[0;32m\nGREEN");
    printf("\033[0;33m\nYELLOW");
    printf("\033[0;36m\nCYAN");
    // [0;31m -> use 1 to bold it up, like this [1;31m
    printf("\033[0m\nRESET COLOR");

    printf("\nEnd message: Hello, World!\n");
    return 0;
}
