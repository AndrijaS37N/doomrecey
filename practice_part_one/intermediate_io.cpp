#include <iostream>
#include "intermediate_io.hpp"
#include "animal.hpp"

void IntermediateIO::swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int IntermediateIO::partition(int array[], int starting_index, int ending_index)
{
    int pivot = array[ending_index]; // pivot
    // std::cout << pivot << std::endl;
    int i = (starting_index - 1); // index of smaller element

    for (int j = starting_index; j <= ending_index - 1; j++)
    {
        if (array[j] <= pivot)
        {
            i++; // increment index of smaller element
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[ending_index]);
    return (i + 1);
}

void IntermediateIO::quicksort(int array[], int starting_index, int ending_index)
{
    if (starting_index < ending_index)
    {
        // partitioning index
        int pi = partition(array, starting_index, ending_index);

        // quicksort from 0 to pi and after that from pi to ending index
        quicksort(array, starting_index, pi - 1);
        quicksort(array, pi + 1, ending_index);
    }
}

void IntermediateIO::print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    std::cout << std::endl;
}