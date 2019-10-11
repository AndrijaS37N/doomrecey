#ifndef part_three_linker_hpp
#define part_three_linker_hpp

#include "alpha.hpp"

using namespace std;

// int addition(int *a, int *b)
// {
//     *a = 10;
//     return *a + *b;
// }

// int addition_ref(int &a, int &b)
// {
//     a = 0;
//     b = 1;
//     return a + b;
// }

// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
// }

// class Entity
// {
// public:
//     Entity() {}
//     // Entity(int a, float b)
//     // {
//     //     m_a = a;
//     //     m_b = b;
//     //     cout << "Entity made!" << endl;
//     // }
//     ~Entity() { cout << "Entity destroyed!" << endl; }
//     int m_a;
//     float m_b;
//     void func()
//     {
//         cout << "Entity func!" << endl;
//         cout << m_a << endl;
//         cout << m_b << endl;
//     }
//     virtual void activate_func_private() { func_private(); }

// private:
//     void func_private() { cout << "Entity private func!" << endl; }
// };

// class Player : public Entity
// {
// public:
//     Player() { cout << "Player made!" << endl; }
//     ~Player() { cout << "Player destroyed!" << endl; }
//     int m_c;
//     void activate_func_private() override { func_private_player(); }

// private:
//     void func_private_player() { cout << "Player private func!" << endl; }
// };

class C
{
    int i;  // 4
    char c; // 1 - 1/4
    char p; // 1 - 2/4
};          // <=> 4 + 4 chunk blocks = 8 bytes

class B
{
    C c;   // 8
    int x; // 4
};         // <=> 12

class A
{
    char c;
    double d;
    char h;
    int i;
};

class A1
{
public:
    enum Example : unsigned char
    {
        X = 'h',
        Y,
        Z
    };
    A a;   // 24
    int x; //
    int q;
};

/*
    The biggest data structure dictates the block size.
*/

enum Example1 : unsigned char
{
    X = 'K',
    Y,
    Z,
    E,
    G,
    H
};

void printElements(const std::array<string, 10> &cookies)
{
    int i = 0;
    for (const string &s : cookies)
    {
        i++;
        std::cout << s << " ";
    }
    std::cout << std::endl;
    std::cout << "Size: " << cookies.size() << std::endl;
}

void activate_part_three()
{
    C c;
    cout << sizeof(c) << endl;
    B b;
    cout << sizeof(b) << endl;
    A a;
    cout << sizeof(a) << endl;
    A1 a1;
    cout << sizeof(a1) << endl;

    // Example val_a = X;
    // Example val_c = Z;
    // cout << (char)val_a << endl;
    // cout << (char)val_c << endl;

    cout << (char)a1.X << endl;
    cout << (char)a1.Z << endl;

    cout << sizeof(Example1) << endl;

    cout << "---" << endl;
    // Printer::printSizes(); // static call
    Printer r;
    r.printSizes();

    char s_array[10];
    cout << "char s_array[10] size: " << sizeof(s_array) << endl;
    const char *p_array;
    cout << "const char *p_array: " << sizeof(p_array) << endl;

    Alpha alpha;
    Beta beta;
    beta.printName("Keyush");
    r.printSizes();
    cout << "---" << endl;
    alpha.func();
    alpha.printLala("Woo!");
    beta.func();
    beta.printLala("Halla!");

    Alpha alpha_d = Alpha();
    Alpha beta_d = Beta();
    // beta.printName("Keyush");
    r.printSizes();
    cout << "---" << endl;
    alpha_d.func();
    alpha_d.printLala("Woo!");
    beta_d.func();
    beta_d.printLala("Halla!");
    cout << "---" << endl;
    Alpha *alpha_p = new Alpha();
    Alpha *beta_p = new Beta();

    alpha_p->func();
    alpha_p->printLala("Woo!");
    beta_p->func();
    beta_p->printLala("Halla!");

    delete (alpha_p);
    delete (beta_p);

    array<string, 10> cookies;
    cookies.fill("Aaaaa");
    printElements(cookies);
    
    cout << endl;
    
    // .....
    // vector<int, int> points;
    // points.push_back(1, 1);

    // WIP 🧩

    // Entity entity(5, 6.4f);
    // Entity entity;
    // entity.func();
    // Player player;
    // player.func();

    // entity.activate_func_private();
    // player.activate_func_private();

    // cout << "sizeof(entity): " << sizeof(entity) << endl;
    // cout << "sizeof(player): " << sizeof(player) << endl;

    // cout << sizeof(short) << endl;
    // cout << sizeof(long) << endl;

    // int a = 4;
    // int b = 3;
    // cout << a << " " << b << endl;
    // cout << addition(&a, &b) << endl;
    // cout << a << " " << b << endl;
    // cout << addition_ref(a, b) << endl;
    // cout << a << " " << b << endl;

    // int *c_array = (int *)calloc(10, sizeof(int));
    // cout << "C array stuff:" << endl;
    // cout << c_array << endl;        // memory address
    // cout << c_array + 1 << endl;    // memory address above + next block (sizeof(int) = 4)
    // cout << *c_array << endl;       // value of the first element
    // cout << *(c_array + 1) << endl; // value of the second element in the array
    // for (int i = 0; i < 10; i++)    // 10 loops
    // {
    //     c_array[i] = 7; // set 0 values from calloc to 7s
    //     cout << c_array[i] << " ";
    // }
    // cout << endl;
    // cout << "First element of the array size: " << sizeof(c_array[0]) << endl; // *c_array, int = 4
    // cout << "Array size: " << sizeof(c_array) << endl;                         // 64-bit computer => 8
    // cout << "Array pointer size: " << sizeof(*c_array) << endl;                // c_array[0], int = 4

    // cout << "Char array size input:" << endl;
    // int n;
    // cin >> n;
    // char *char_array = (char *)calloc(n, sizeof(char));
    // cout << (int)*char_array << endl;
    // // the below line is the same as (int *) &char_array[0] => the address of the first element
    // cout << "Char array print: " << (int *)char_array << endl; // must be casted to a int * because it's a memory address in hex
    // cout << sizeof char_array << endl;                         // sizeof memory address, 8 bytes
    // cout << sizeof *char_array << endl;                        // sizeof first element of the array, char = 1 byte
    // for (int i = 0; i < n; i++)
    // {
    //     cout << (int)char_array[i] << " ";
    //     char_array[i] = 'f';               // will be
    //     cout << (int)char_array[i] << " "; // 102
    // }
    // cout << endl;

    // // realloc example
    // printf("Input m: ");
    // int m;
    // scanf("%i", &m);
    // char *string_pointer = (char *)malloc(sizeof(int) * m);
    // cout << "Strlen: " << strlen(string_pointer) << endl;
    // strcpy(string_pointer, "Keyush");
    // cout << "Strlen: " << strlen(string_pointer) << endl;
    // printf("String = %s, address = %p\n", string_pointer, string_pointer);
    // // reallocating memory
    // string_pointer = (char *)realloc(string_pointer, sizeof(int) * m * 2);
    // strcat(string_pointer, ": 'Ruf, ruf!'");
    // cout << "Strlen: " << strlen(string_pointer) << endl;
    // printf("String = %s, address = %p\n", string_pointer, string_pointer);
    // cout << "string_pointer[strlen(string_pointer) - 1] = " << string_pointer[strlen(string_pointer) - 1] << endl;
    // for (int i = 0; i < 20; i++)
    // {
    //     printf("%c", string_pointer[i]);
    //     if (string_pointer[i] == '\0')
    //     {
    //         printf("\nEnd of string!\n");
    //         printf("%c", string_pointer[i]);
    //         break;
    //     }
    // }

    // // examples of using const
    // const int *const_int;                               // declares that const_int is a variable pointer to a constant integer
    // int const *const_int_b;                             // is an alternative syntax which does the same
    // int *const const_pointer = nullptr;                 // declares that const_pointer is constant pointer to a variable integer
    // int const *const const_int_const_pointer = nullptr; // declares that const_int_const_pointer is constant pointer to a constant integer

    // /*
    //     Basically ‘const’ applies to whatever is on its immediate left (other than if there is nothing there in which case it applies to whatever is its immediate right).
    // */

    // int k = 10;
    // int arr[k];
    // printf("Array before memset():\n");
    // printArray(arr, k);
    // memset(arr, 10, k * sizeof(arr[0]));
    // printf("\nArray after memset():\n");
    // printArray(arr, k);
    // char str_a[] = "Huuuraaaah!";
    // memset(str_a, 'W', 6);
    // cout << endl;
    // puts(str_a);
    // char str_b[30];
    // strcpy(str_b, "Woooooooooooooooooooo!");
    // puts(str_b);
    // memset(str_b, 'X', 7);
    // puts(str_b);

    // free(c_array);
    // free(char_array);
    // free(string_pointer);
}

#endif /* part_three_linker_hpp */