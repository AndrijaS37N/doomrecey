#ifndef husky_hpp
#define husky_hpp

extern const int global_avarage_barks;

class Husky
{
public:
    Husky(int waffles);
    void add_extra_waffles(int waffles);
    void eat_waffle();
    static int waffle_count;
    int waffles_eaten;
    void print_global_avarage_barks() { std::cout << "Global avarage barks (from husky's view): " << global_avarage_barks << '\n'; };
};

#endif /* husky_hpp */