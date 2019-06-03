#ifndef b_class_hpp
#define b_class_hpp

class B : public A
{

private:
    std::string class_name;

public:
    B(const std::string &name) : class_name(name) {}
    std::string get_name() { return class_name; }
};

#endif /* b_class_hpp */