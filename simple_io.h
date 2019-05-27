#ifndef simple_io_h
#define simple_io_h

#define LENGHT_BRACKETS 10

struct SimpleNumber
{
    int integer_var;
    double double_var;
    float float_var;
} simple_number_struct;

struct StaticString
{
    char text[LENGHT_BRACKETS];
    char first_letter;
};

// TODO
struct DynamicString
{
    int lenght;
    char *text;
    char last_letter;
};

void log_integer();
void log_double();
void log_float();
void log_static_string();

// TODO
void log_string_fgets();
void log_dynamic_string();

#endif /* simple_io_h */