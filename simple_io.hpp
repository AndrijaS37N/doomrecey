#ifndef simple_io_hpp
#define simple_io_hpp

class SimpleIO
{
public:
    // g++ ${array_of_files} -o doomrecey++
    int call_hello_world();
    int factorial(int number);

private:
    void print_hello_world();
};
#endif /* simple_io_hpp */