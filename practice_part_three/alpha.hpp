#ifndef alpha_hpp
#define alpha_hpp

using namespace std;

class Alpha
{
public:
    float X, Y;
    static unsigned long long int s_var; // if not const but assigned a value like = 87314039; -> compile error
    void move(float x, float y)
    {
        X += x;
        Y += y;
    }

private:
};

class Beta
{
public:
    const char *name;
    const char *last_name;
    void printName(const char *name)
    {
        this->name = name;
        cout << "this->name: " << this->name << endl;
        cout << "sizeof(this->name): " << sizeof(this->name) << endl;
    }

private:
};

// WIP

struct Printer
{
    void printSizes();
};

#endif /* alpha_hpp */