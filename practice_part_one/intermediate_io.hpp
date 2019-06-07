#ifndef intermediate_io_hpp
#define intermediate_io_hpp

class IntermediateIO
{
public:
    void swap(int *a, int *b);
    int partition(int array[], int left, int right);
    void quicksort(int array[], int left, int right);
    void print_array(int array[], int size);
};
#endif /* intermediate_io_hpp */