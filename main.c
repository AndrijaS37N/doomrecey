/* 
Created by Andrija Djuric on 5/25/19
Copyright © 2019 Andrija Djuric. All rights reserved? 😉
Using Xcode & VS Code with Code Runner, GCC & IntelliSense
*/

#include <stdio.h>
#include <math.h>
#include <sys/time.h>
#include <unistd.h>
#include "simple_io.h"

// gcc ${array_of_files} -o doomrecey

void getchar_time()
{
    printf("Measuring getchar(), time() time. Press 'y' to continue on... ");
    while (1)
        if (getchar() == 'y')
            break;
        else
            continue;
}

int main(int argc, const char *argv[])
{
    log_integer();
    log_double();
    log_float();

    log_static_string();

    // some console colors
    printf("\033[0m\n\nSETTING COLORS");
    printf("\033[0;31m\nRED");
    printf("\033[0;34m\nBLUE");
    printf("\033[0;32m\nGREEN");
    printf("\033[0;33m\nYELLOW");
    printf("\033[0;36m\nCYAN");
    // for bold colors use 1 instead of 0, like this [1;31m
    printf("\033[0m\nRESET COLORS");

    printf("\nC end message: \033[1;32mHello, World!\n");
    printf("\033[0m\n");

    printf("SIZES\nint - %lu\nchar - %lu\ndouble - %lu\nfloat - %lu\nlong int - %lu\nlong long int - %lu\n\n", sizeof(int), sizeof(char), sizeof(double), sizeof(float), sizeof(long int), sizeof(long long int));

    // TIME: FIRST TRY
    printf("Calculate clock() time running the loop:\n");
    clock_t clock_start = clock();
    double buffer_loop;

    for (size_t i = 0; i < 100; i++)
        buffer_loop = i * M_PI;

    printf("Loops product: %lf\n", buffer_loop);
    printf("Time taken: %.8fs\n", (double)(clock() - clock_start) / CLOCKS_PER_SEC);

    // TIME: SECOND TRY - getchar() my input time
    time_t time_start = time(NULL);

    getchar_time();

    printf("Time taken: ~ %.2fs\n", (double)(time(NULL) - time_start));

    // TIME: THIRD TRY - MORE precise time
    // type explanation is here https://en.cppreference.com/w/c/io/fprintf
    long start, end;
    struct timeval time_struct;

    gettimeofday(&time_struct, NULL);
    start = (long)time_struct.tv_sec * 1000 + (long)time_struct.tv_usec / 1000;

    printf("More precise measuring 👇\n");
    getchar_time();

    gettimeofday(&time_struct, NULL);
    end = (long)time_struct.tv_sec * 1000 + (long)time_struct.tv_usec / 1000;

    printf("Milliseconds elapsed: %ldms\n", (end - start));

    int ref = 5;
    printf("\nPassing the number %i (passing addresses to simulate a reference), it should return as 10\n", ref);
    set_by_ref(&ref);
    printf("Now the number is: %i\n", ref);

    return 0;
}