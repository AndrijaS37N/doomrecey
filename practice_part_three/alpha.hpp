#ifndef alpha_hpp
#define alpha_hpp

using namespace std;

class Alpha
{
public:
    float X, Y;
    static unsigned long long int s_var; // if not const but assigned a value like = 82804; -> compile error
    void func()
    {
        cout << "Alpha func()" << endl;
    }
    virtual void printLala(const string &text)
    {
        cout << "Alpha: " << text << endl;
    }

private:
};

class Beta : public Alpha
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
    void printLala(const string &s) override
    {
        cout << "Beta: " << s << endl;
    }
    void func()
    {
        cout << "Beta func()" << endl;
    }

private:
};

// WIP

struct Printer
{
    void printSizes();
};

class X
{
    float X, Y;
};

class Y : public X
{
    const char* text;
};

#endif /* alpha_hpp */