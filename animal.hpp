#ifndef animal_hpp
#define animal_hpp

class Animal
{
public:
    std::string get_class_name() { return "Animal"; }
    void print_class_name(Animal *animal);
};

#endif /* animal_hpp */