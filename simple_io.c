#include <stdio.h>
#include "simple_io.h"
// warnings for <stdio.h> if not included

void log_integer()
{
    printf("Enter integer variable: ");
    scanf("%i", &numbers.integer_var);
    printf("Input: %i\n", numbers.integer_var);
}
void log_double()
{
    printf("Enter double variable: ");
    scanf("%lf", &numbers.double_var);
    printf("Input: %lf\n", numbers.double_var);
}
void log_float()
{
    printf("Enter float variable: ");
    scanf("%f", &numbers.float_var);
    printf("Input: %f\n", numbers.float_var);
}
void log_string_brackets()
{
    struct Strings strings;
    printf("Enter string variable lenght: ");
    scanf("%i", &strings.lenght);
    printf("Enter string variable text: ");
    scanf("%s", strings.text);
    printf("Input: %s", strings.text);
}