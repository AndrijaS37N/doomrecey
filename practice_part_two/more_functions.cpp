#include <iostream>
#include "more_functions.hpp"

void MoreFunctions::printing_sizeofs()
{
    std::cout << "\nSIZEOF\n";
    int integer;
    int *integer_ptr;
    int **integer_ptr_ptr;

    std::cout << "sizeof(integer) = " << sizeof(integer) << " | integer = " << integer << '\n';
    std::cout << "sizeof(integer_ptr) = " << sizeof(integer_ptr) << " | integer_ptr = " << integer_ptr << '\n';
    std::cout << "sizeof(integer_ptr_ptr) = " << sizeof(integer_ptr_ptr) << " | integer_ptr_ptr = " << integer_ptr_ptr << '\n';
    std::cout << "sizeof(&integer) = " << sizeof(&integer) << " | &integer = " << &integer << '\n';
    std::cout << "sizeof(&integer_ptr) = " << sizeof(&integer_ptr) << " | &integer_ptr = " << &integer_ptr << '\n';
    std::cout << "sizeof(&integer_ptr_ptr) = " << sizeof(&integer_ptr_ptr) << " | &integer_ptr_ptr = " << &integer_ptr_ptr << '\n';

    std::cout << "segfault -> sizeof(*integer_ptr) | *integer_ptr\n";
    // segfault -> std::cout << "sizeof(*integer_ptr) = " << sizeof(*integer_ptr) << " | *integer_ptr = " << *integer_ptr << '\n';

    std::cout << "segfault -> sizeof(**integer_ptr_ptr) | **integer_ptr_ptr\n";
    // segfault -> std::cout << "sizeof(**integer_ptr_ptr) = " << sizeof(**integer_ptr_ptr) << " | **integer_ptr_ptr = " << **integer_ptr_ptr << '\n';

    std::cout << "sizeof(&(*integer_ptr)) = " << sizeof(&(*integer_ptr)) << " | &(*integer_ptr) = " << &(*integer_ptr) << '\n';
}

void MoreFunctions::passing_by_pointer(int *number)
{
    *number += 1;
}

int MoreFunctions::copy_passing_by_pointer(int *number)
{
    // let's return a local variable (don't really know why I made this function)
    int number_copy;
    *number += 1;
    number_copy = *number;
    return number_copy;
}

void LinkedList::print_linked_list()
{
    Node *temporary_node = head;
    std::cout << "Printing linked list:\n";

    while (temporary_node != NULL)
    {
        std::cout << temporary_node->data << '\n';
        temporary_node = temporary_node->next_one;
    }
}

void LinkedList::push_element(const std::string &data)
{
    Node *temporary_node = new Node(data);
    temporary_node->next_one = head;
    head = temporary_node;
}

void LinkedList::reverse()
{
    std::cout << "Reversing linked list...\n";
    Node *current = head;
    Node *previous = NULL;
    Node *next = NULL;

    while (current != NULL)
    {
        /* 
            First loop:
            3 -> 2 -> 1 -> 0 -> NULL, next = 2, '2' node = NULL, previous = 3 (HEAD)

            End of the first loop would look like this: 
            current = 2 (next one)
            previous = 3 (latest one)
            next = 2 (ready to be changed in the beginning of the next loop)
        */
        next = current->next_one;
        current->next_one = previous;
        previous = current;
        current = next;
    }

    head = previous;
}

Node *LinkedList::recursive_reverse(Node *head)
{
    if (head == NULL)
        return NULL;

    if (head->next_one == NULL)
    {
        // setting the last value as the new head
        this->head = head;
        return head;
    }

    Node *temp = recursive_reverse(head->next_one);
    temp->next_one = head;
    head->next_one = NULL;

    return head;
}

void LinkedList::void_recursive_reverse(Node **head_ref)
{
    Node *first;
    Node *rest;

    if (*head_ref == NULL)
        return;

    first = *head_ref;
    rest = first->next_one;

    if (rest == NULL)
        return;

    // reverse the rest list and put the first element at the end
    void_recursive_reverse(&rest);
    first->next_one->next_one = first;

    first->next_one = NULL;

    // fix the head pointer
    *head_ref = rest;
}

void MoreFunctions::print_letter_array(const char *letters[], size_t letters_size)
{
    std::cout << "Printing (char *[]) letter array:\n";
    for (size_t i = 0; i < LETTERS_SIZE; i++)
        std::cout << "Letter - " << letters[i] << std::endl;
}

// let's activate it like this redundantly with params
void MoreFunctions::call_print_letter_array() { print_letter_array(letters, LETTERS_SIZE); }

void MoreFunctions::print_std_array()
{
    std::cout << "Printing (std_array) int array:\n";
    for (size_t i = 0; i < MY_ARRAY_LENGHT; i++)
        std::cout << "Number - " << my_array[i] << std::endl;
}

// void MoreFunctions::print_my_matrix_semidyn(int &columns)
// {
//     for (int i = 0; i < MATRIX_ROW_SIZE; i++)
//     {
//         std::cout << '\n';
//         for (int j = 0; j < columns; j++)
//             std::cout << my_matrix[i][j] << ' ';
//     }
// }

void MoreFunctions::matrix_print_A_static()
{
    for (int i = 0; i < MATRIX_ROW_SIZE; i++)
        for (int j = 0; j < 7; j++)
            my_matrix_static[i][j] = 0;

    // STATIC VERSION * fully-static matrix * 👇
    my_matrix_static[0][3] = 1;
    for (size_t i = 2; i <= 4; i++)
        my_matrix_static[1][i] = 1;

    my_matrix_static[2][1] = 1;
    my_matrix_static[2][5] = 1;

    // let's write this out for practise too
    int rows = sizeof(my_matrix_static) / sizeof(my_matrix_static[0]);
    int columns = sizeof(my_matrix_static[0]) / sizeof(int);

    std::cout << "Printing elements of my_matrix_static:\n";

    for (int i = 0; i < rows; i++)
    {
        std::cout << '\n';
        for (int j = 0; j < columns; j++)
            std::cout << my_matrix_static[i][j] << ' ';
    }

    std::cout << std::endl;
    // 🎬

    // SEMI-DYNAMIC MATRIX 👇 // ⚠️
    // int columns;
    // std::cout << "Enter column size for the my_matrix:\n";
    // std::cin >> columns;

    // for (int i = 0; i < MATRIX_ROW_SIZE; ++i)
    //     my_matrix[i] = new int[columns]; // heap alloc, new -> 'column'

    // print_my_matrix_semidyn(columns);

    /* 
        Writing 'A' in the matrix with number 1; Let's say write the 'A' only when the columns number is 7.
    */
    // if (columns == 7)
    // {
    //     my_matrix[0][3] = 1;
    //     std::cout << my_matrix[0][3];
    //     for (size_t i = 2; i <= 4; i++)
    //         my_matrix[1][i] = 1;

    //     my_matrix[2][1] = 1;
    //     my_matrix[2][5] = 1;
    //     print_my_matrix_semidyn(columns);
    // }

    // for (int i = 0; i < MATRIX_ROW_SIZE; ++i) // ⚠️
    //     delete (my_matrix[i]);
    // 🎬
}

void MoreFunctions::matrix_print_A_dynamic()
{
    int rows;
    std::cout << "Input my_matrix_dynamic new *int[?]: ";
    std::cin >> rows;
    my_matrix_dynamic = new int *[rows];

    int columns;
    std::cout << "Input my_matrix_dynamic[i] new int[?]: ";
    std::cin >> columns;
    for (int i = 0; i < rows; ++i)
        my_matrix_dynamic[i] = new int[columns];

    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < columns; ++j)
            my_matrix_dynamic[i][j] = 7;

    // print it
    for (int i = 0; i < rows; ++i)
    { 
        std::cout << '\n';
        for (int j = 0; j < columns; ++j)
            std::cout << my_matrix_dynamic[i][j] << ' ';
    }

    std::cout << std::endl;
}

void BinaryTree::add_element(const int &value)
{
    // TODO -> add_element impl
}