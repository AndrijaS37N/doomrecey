#include <stdio.h>
#include "simple_io.h"
// warnings for <stdio.h> if not included

void log_integer()
{
    printf("Enter integer variable: ");
    scanf("%i", &simple_number_struct.integer_var);
    printf("Input: %i\n", simple_number_struct.integer_var);
}
void log_double()
{
    printf("Enter double variable: ");
    scanf("%lf", &simple_number_struct.double_var);
    printf("Input: %lf\n", simple_number_struct.double_var);
}
void log_float()
{
    printf("Enter float variable: ");
    scanf("%f", &simple_number_struct.float_var);
    printf("Input: %f\n", simple_number_struct.float_var);
}
void log_static_string()
{
    struct StaticString string;
    printf("Enter string variable text: ");
    scanf("%s", string.text);
    printf("Input: %s", string.text);
}
void log_string_fgets()
{
    // WIP
}
void log_dynamic_string()
{
    // WIP
}