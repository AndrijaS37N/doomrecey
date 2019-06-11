#ifndef malamute_hpp
#define malamute_hpp

#include <vector>

// example : taking a declared global constant from husky.hpp and defining it here
const int global_avarage_barks = 7;

class Malamute
{
private:
    std::vector<Yawn> yawns;

public:
    void add_yawn(Yawn yawn);
    void print_yawns();
    void set_yawns(std::vector<Yawn> yawns) { this->yawns = yawns; };
    std::vector<Yawn> get_yawns() { return this->yawns; };
    void print_global_avarage_barks() { std::cout << "Global avarage barks (from malamute's view): " << global_avarage_barks << '\n'; };
};

#endif /* malamute_hpp */