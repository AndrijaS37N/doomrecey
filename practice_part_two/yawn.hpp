#ifndef yawn_hpp
#define yawn_hpp

class Yawn
{
private:
    double duration;
    std::string sound_made;

public:
    // kinda different constructor method
    Yawn(const double &d, const std::string &s) : duration(d), sound_made(s){};
    // try out : getters and setters
    void set_duration(const double &duration) { this->duration = duration; };
    const double &get_duration() { return this->duration; };
    void set_sound_made(std::string &sound_made) { this->sound_made = sound_made; };
    const std::string &get_sound_made() { return this->sound_made; };
};

#endif /* yawn_hpp */