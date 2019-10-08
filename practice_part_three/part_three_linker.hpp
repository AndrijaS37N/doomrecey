#ifndef part_three_linker_hpp
#define part_three_linker_hpp

using namespace std;

class Entity
{
public:
    Entity();
    ~Entity();
    int a;
    int b;
    void func() { cout << "Entity func!" << endl; }

private:
    void func_private() { cout << "Entity private func!" << endl; }
};

class Player : public Entity
{
public:
    Player();
    ~Player();
    int c;

private:
    void func_private() { cout << "Player private func!" << endl; }
};

int addition(int *a, int *b)
{
    *a = 10;
    return *a + *b;
}

int addition_ref(int &a, int &b)
{
    a = 0;
    b = 1;
    return a + b;
}

void activate_part_three()
{
    int a = 4;
    int b = 3;
    cout << a << " " << b << endl;
    cout << addition(&a, &b) << endl;
    cout << a << " " << b << endl;
    cout << addition_ref(a, b) << endl;
    cout << a << " " << b << endl;

    int *c_array = (int *)calloc(10, sizeof(int));
    cout << "C array stuff:" << endl;
    cout << c_array << endl;        // memory address
    cout << c_array + 1 << endl;    // memory address above + next block (sizeof(int) = 4)
    cout << *c_array << endl;       // value of the first element
    cout << *(c_array + 1) << endl; // value of the second element in the array
    for (int i = 0; i < 10; i++)    // 10 loops
    {
        c_array[i] = 7; // set 0 values from calloc to 7s
        cout << c_array[i] << " ";
    }
    cout << endl;
    cout << "First element of the array size: " << sizeof(c_array[0]) << endl; // *c_array, int = 4
    cout << "Array size: " << sizeof(c_array) << endl;                         // 64-bit computer => 8
    cout << "Array pointer size: " << sizeof(*c_array) << endl;                // c_array[0], int = 4

    cout << "Char array size input:" << endl;
    int n;
    cin >> n;
    char *char_array = (char *)calloc(n, sizeof(char));
    cout << (int)*char_array << endl;
    // the below line is the same as (int *) &char_array[0] => the address of the first element
    cout << "Char array print: " << (int *)char_array << endl; // must be casted to a int * because it's a memory address in hex
    cout << sizeof char_array << endl;                         // sizeof memory address, 8 bytes
    cout << sizeof *char_array << endl;                        // sizeof first element of the array, char = 1 byte
    for (int i = 0; i < n; i++)
    {
        cout << (int)char_array[i] << " ";
        char_array[i] = 'f';               // will be
        cout << (int)char_array[i] << " "; // 102
    }
    cout << endl;

    // WIP

    free(c_array);
    free(char_array);
}

#endif /* part_three_linker_hpp */