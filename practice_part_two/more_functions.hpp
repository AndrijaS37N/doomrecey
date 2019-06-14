#ifndef more_functions_hpp
#define more_functions_hpp

#include <array>

const int LETTERS_SIZE = 7;
const int MY_ARRAY_LENGHT = 7;
// this is just for practice purposes
typedef std::array<int, MY_ARRAY_LENGHT> std_array;

class MoreFunctions
{ 
public:
    void printing_sizeofs();
    void passing_by_pointer(int *number);
    int copy_passing_by_pointer(int *number);
    const char *letters[LETTERS_SIZE] = {"A", "B", "C", "D", "E", "F", "G"};
    void print_letter_array(const char *letters[], size_t letters_size);
    void call_print_letter_array();
    std_array my_array{1, 2, 3, 4, 5, 6, 7};
    void print_std_array();
    int *my_matrix[3][7] = {
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0}, 
        {0, 0, 0, 0, 0, 0, 0}
    };
    // TODO -> threads, matrices...
};

class Node
{
public:
    Node(const std::string &data) { this->data = data; }
    std::string data;
    Node *next_one;
};

class LinkedList
{
public:
    // initialize the head as NULL
    LinkedList() { head = NULL; }
    Node *head;
    void reverse();
    void print_linked_list();
    void push_element(const std::string &data);
    Node *recursive_reverse(Node *node);
    void void_recursive_reverse(Node **head_ref);
};

#endif /* more_functions_hpp */
