#ifndef husky_hpp
#define husky_hpp

int static_waffle_count;

class Husky
{
public:
    Husky(int waffle_number);
    void add_waffles(int waffle_count);
    void print_waffle_count();
    void eat_waffle();
    static int waffles_eaten;
};

#endif /* husky_hpp */