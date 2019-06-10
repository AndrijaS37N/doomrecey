#ifndef malamute_hpp
#define malamute_hpp

#include <vector>

// example : taking the global static variable from husky.hpp
extern int static_waffle_count;

class Malamute
{
private:
    // incomplete type not allow?
    // found older working examples that work just like this but this seems not to be valid anymore
    // must find a solution
    std::vector<Yawn> yawns_list;

public:
    void add_yawn(Yawn yawn);
    // let's say this is a static method
    static void print_waffle_count();
    // void set_yawns_list(std::vector<Yawn> &yawns_list);
    // std::vector<Yawn> &get_yawns_list() { return this->yawns_list; };
    void print_yawns_list();
};

#endif /* malamute_hpp */