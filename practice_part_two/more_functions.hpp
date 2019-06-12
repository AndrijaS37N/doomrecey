#ifndef more_functions_hpp
#define more_functions_hpp

class MoreFunctions
{
public:
    void printing_sizeofs();
    void passing_by_pointer(int *number);
    int copy_passing_by_pointer(int *number);

    // TODO -> threads, raw arrays, arrays, matrices...
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
};

#endif /* more_functions_hpp */
