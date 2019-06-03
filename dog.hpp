#ifndef dog_hpp
#define dog_hpp

class Dog : public Animal
{

private:
    std::string class_name;

public:
    Dog(const std::string &name) : class_name(name) {}
    std::string get_name() { return class_name; }
};

#endif /* dog_hpp */