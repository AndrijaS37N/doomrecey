#ifndef cat_hpp
#define cat_hpp

class Cat : public Animal
{
public:
    // unlike Animal class's regular virtual function for printing the class name, this make_sound is mandatory for implementation
    // pure function overriden in the cat.cpp file definition, this is just a declaration
    std::string make_sound(std::string sound_made) override;
};

#endif /* cat_hpp */