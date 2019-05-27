#ifndef simple_io_h
#define simple_io_h

struct Numbers
{
    int integer_var;
    double double_var;
    float float_var;
} numbers;

struct Strings
{
    int lenght;
    char text[];
};

void log_integer();
void log_double();
void log_float();
void log_string_brackets();

#endif /* simple_io_h */