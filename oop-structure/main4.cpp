#include <iostream>
#include <string>

// typedef struct Student
// {
//     int num;
//     Student1 anc;
// } Student1;

int main()
{
    Student abc;
    abc.num = 10;
    abc.anc.num = 11;

    std::cout << abc.num << std::endl;
    std::cout << abc.anc.num << std::endl;
    return 0;
}