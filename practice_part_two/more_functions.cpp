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

    // tricky step, see a diagram
    first->next_one = NULL;

    // fix the head pointer
    *head_ref = rest;
}