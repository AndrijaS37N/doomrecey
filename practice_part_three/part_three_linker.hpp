#ifndef part_three_linker_hpp
#define part_three_linker_hpp

using namespace std;

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

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

class Entity
{
public:
    Entity() { cout << "Entity made!" << endl; }
    ~Entity() { cout << "Entity destroyed!" << endl; }
    int m_a;
    int m_b;
    void func() { cout << "Entity func!" << endl; }

private:
    void func_private() { cout << "Entity private func!" << endl; }
};

class Player : public Entity
{
public:
    Player() { cout << "Player made!" << endl; }
    ~Player() { cout << "Player destroyed!" << endl; }
    int m_c;

private:
    void func_private() { cout << "Player private func!" << endl; }
};

void activate_part_three()
{
    Entity entity;
    entity.func();
    Player player;
    player.func();

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

    // realloc example
    printf("Input m: ");
    int m;
    scanf("%i", &m);
    char *string_pointer = (char *)malloc(sizeof(int) * m);
    cout << "Strlen: " << strlen(string_pointer) << endl;
    strcpy(string_pointer, "Keyush");
    cout << "Strlen: " << strlen(string_pointer) << endl;
    printf("String = %s, address = %p\n", string_pointer, string_pointer);
    // reallocating memory
    string_pointer = (char *)realloc(string_pointer, sizeof(int) * m * 2);
    strcat(string_pointer, ": 'Ruf, ruf!'");
    cout << "Strlen: " << strlen(string_pointer) << endl;
    printf("String = %s, address = %p\n", string_pointer, string_pointer);
    cout << "string_pointer[strlen(string_pointer) - 1] = " << string_pointer[strlen(string_pointer) - 1] << endl;
    for (int i = 0; i < 20; i++)
    {
        printf("%c", string_pointer[i]);
        if (string_pointer[i] == '\0')
        {
            printf("\nEnd of string!\n");
            printf("%c", string_pointer[i]);
            break;
        }
    }

    // examples of using const
    const int *const_int;                               // declares that const_int is a variable pointer to a constant integer
    int const *const_int_b;                             // is an alternative syntax which does the same
    int *const const_pointer = nullptr;                 // declares that const_pointer is constant pointer to a variable integer
    int const *const const_int_const_pointer = nullptr; // declares that const_int_const_pointer is constant pointer to a constant integer

    /*
        Basically ‘const’ applies to whatever is on its immediate left (other than if there is nothing there in which case it applies to whatever is its immediate right).
    */

    int k = 10;
    int arr[k];
    printf("Array before memset():\n");
    printArray(arr, k);
    memset(arr, 10, k * sizeof(arr[0]));
    printf("\nArray after memset():\n");
    printArray(arr, k);
    char str_a[] = "Huuuraaaah!";
    memset(str_a, 'W', 6);
    cout << endl;
    puts(str_a);
    char str_b[30];
    strcpy(str_b, "Woooooooooooooooooooo!");
    puts(str_b);
    memset(str_b, 'X', 7);
    puts(str_b);

    free(c_array);
    free(char_array);
    free(string_pointer);
}

#endif /* part_three_linker_hpp */