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
    // let's return a local variable
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
    // delete(temporary_node);
}

void LinkedList::reverse()
{
    std::cout << "Reversing linked list\n";
    Node *current = head;
    Node *previous = NULL;
    Node *next = NULL;

    while (current != NULL)
    {
        // not working -> fix soon and use recursion
        next = current->next_one;
        current->next_one = previous;
        previous = current;
        current = next;
    }
}