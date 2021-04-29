#include <iostream>
// #include <imagelib.h>

// printArray function
void set_odd(int *&arr, int size)
{
    int *new_arr = new int[size];
    for (int i = 0; i < size; ++i)
    {
        new_arr[i] = arr[i] % 2 == 0 ? arr[i] : -1;
    }
    arr = new_arr;
}

void print_arr(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << (arr[i]) << " ";
    }
    std::cout << std::endl;
}

void delete_arr(int *&arr, int size, int del_size)
{
    int new_size = size - 1;
    int *new_arr = new int[new_size];
    for (int i = 0; i < new_size; ++i)
    {
        new_arr[i] = (i == del_size || i > del_size) ? arr[i + 1] : arr[i];
    }
    delete[] arr;
    arr = new_arr;
}

int main()
{
    int *arr = nullptr;
    arr = new int[5];

    for (int i = 0; i < 5; ++i)
    {
        arr[i] = i;
    }
    set_odd(arr, 5);
    print_arr(arr, 5);
    delete_arr(arr, 5, 3);
    print_arr(arr, 4);

    delete[] arr;
    arr = nullptr;

    system("clear");
    std::cout << std::flush;
}