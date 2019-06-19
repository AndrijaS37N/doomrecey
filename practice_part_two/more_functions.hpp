#ifndef more_functions_hpp
#define more_functions_hpp

#include <array>

const int LETTERS_SIZE = 7;
const int MY_ARRAY_LENGHT = 7;
// this is just for practice purposes
typedef std::array<int, MY_ARRAY_LENGHT> std_array;

const int MATRIX_ROW_SIZE = 3;

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

    /* 
        > semi-dynamic try-out
        > stack alloc '3'
        > int *my_matrix[MATRIX_ROW_SIZE];
    */

    // void print_my_matrix_semidyn(int &column);

    // static version
    int my_matrix_static[MATRIX_ROW_SIZE][7];
    void matrix_print_A_static();

    // dynamic version
    int **my_matrix_dynamic;
    void matrix_print_A_dynamic();

    // TODO -> threads, maps, auto, heaps, stacks, qeues, algos, time + space
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

class BinaryTree
{
public:
    BinaryTree() { root = NULL; }
    struct BinaryTreeNode *root;
    void add_element(const int &value);
    void reverse();
    void print_binary_tree();
};

struct BinaryTreeNode
{
    int value = 0;
    struct BinaryTreeNode *left_child = NULL;
    struct BinaryTreeNode *right_child = NULL;
};

#endif /* more_functions_hpp */
