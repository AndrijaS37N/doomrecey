#ifndef dog_hpp
#define dog_hpp

class Dog : public Animal
{
private:
    std::string class_name;

public:
    // input class_name(const std::string &name) in the private: std::string class_name in this class above
    Dog(const std::string &name) : class_name(name) {}
    // override this virtual function from Animal class with the string passed when initializing the object in the constructor
    // and override is from c++ 11, I think
    std::string get_class_name() override { return class_name; }
    // pure function overriden in the dog.cpp file definition, this is just a declaration
    std::string make_sound(std::string sound_made) override;
};

#endif /* dog_hpp */