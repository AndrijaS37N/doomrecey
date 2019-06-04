#ifndef sounds_hpp
#define sounds_hpp

class Sounds // animal sounds 'interface'
{
public:
    // pure virtual to be defined in subclasses, force them to implement their own definition of this function
    virtual std::string make_sound(std::string sound_made) = 0;
};

#endif /* sounds_hpp */

#ifndef animal_hpp
#define animal_hpp

class Animal : public Sounds
{
public:
    virtual std::string get_class_name() { return "Animal"; }
    void print_class_name(Animal *animal);
    std::string make_sound(std::string sound_made) override { return "Animal sounds can be for example: Barking, meowing, whistling, mooing ... "; }
};

#endif /* animal_hpp */
