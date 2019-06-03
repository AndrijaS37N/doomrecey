#include <iostream>
#include "simple_io.hpp"
#include "intermediate_io.hpp"
#include "animal.hpp"
#include "dog.hpp"

/*
Note: More restructuring of this code into other files and classed will be done at a later date.
- - - - - - - - - - - - - - - - - - - - - - - -
g++ ${array_of_files} -o doomrecey++ -std=c++11
-std=c++11 flag used for the 'override' keyword made standard in c++11 I think (extension)
- - - - - - - - - - - - - - - - - - - - - - - -
*/

int main()
{
    SimpleIO simple_io;
    std::cout << "CPP messages:" << std::endl;

    // Simple stuff 👇

    // simple_io.call_hello_world();

    // int number;
    // std::cout << "Calculate factorial of the number: ";
    // std::cin >> number;
    // // std::cout << "Factorial of " << number << " is:" << simple_io.factorial(4) << std::endl;
    // printf("%i! is %i\n", number, simple_io.factorial(number));
    // printf("%i! is %i\n", number, simple_io.recursive_factorial(number, 1));
    // printf("%i! is %i\n", number, simple_io.optimised_recursive_factorial(number));

    // std::string word;
    // std::cout << "Check if palindrome (string): ";
    // std::cin >> word;
    // std::cout << "Check if palindrome (int): ";
    // int num;
    // std::cin >> num;

    // std::cout << "Palindrome string (1 = true, 0 = false): " << simple_io.palindrome_string(word) << std::endl;
    // std::cout << "Palindrome number (1 = true, 0 = false): " << simple_io.palindrome_number(num) << std::endl;

    // simple_io.divising();
    // simple_io.is_prime();

    // std::cout << "Fibonacci sequence input: " << std::endl;
    // int fibonacci_input;
    // std::cin >> fibonacci_input;
    // std::cout << "Fib result print: " << simple_io.calculate_fibonacci(fibonacci_input) << std::endl;

    // std::cout << "Fib counter print: ";
    // int fib_counter = 0;
    // while (fib_counter < fibonacci_input)
    // {
    //     std::cout << simple_io.calculate_fibonacci(fib_counter) << " ";
    //     fib_counter++;
    // }

    // std::cout << std::endl;

    // intermediate stuff 👇

    IntermediateIO intermediate_io;

    // int array[] = {10, 7, 8, 9, 1, 5, 25, 13, 3, 6};
    // // number of elements
    // int number_of_elements = sizeof(array) / sizeof(array[0]);
    // intermediate_io.quicksort(array, 0, number_of_elements - 1);
    // printf("Sorted array: ");
    // intermediate_io.print_array(array, number_of_elements);

    // more classes, virtual, pure virtual ...
    Animal *animal = new Animal();
    std::cout << "Call animal get_class_name(): " << animal->get_class_name() << std::endl;

    Dog *keyush = new Dog("Dog 'Keyush'");
    std::cout << "Call dog get_class_name(): " << keyush->get_class_name() << std::endl;
    std::cout << "call dog get_name(): " << keyush->get_class_name() << std::endl;

    delete (animal);
    delete (keyush);

    Dog *rupert = new Dog("Dog 'Ruppert'");
    Animal *pup = rupert;
    std::cout << "Call animal get_class_name(): " << pup->get_class_name() << std::endl;

    Dog *passed_rupert = new Dog("Dog passed 'Rupert'");
    std::cout << "Print Dog *passed_rupert as Animal *animal object: ";
    // was 'Animal', but with virtual and an override now it's Dog passed 'Rupert'
    pup->print_class_name(passed_rupert);

    // delete (pup);
    // delete (rupert);
    // delete (passed_rupert);

    /* ......... do more
     WIP */
    return 0;
}
