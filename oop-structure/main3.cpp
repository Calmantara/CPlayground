#include <iostream>
#include <string>

// Structure to store Student information
struct Student
{
    std::string name;
    double marks[4];
};

// Function to calculate percentage
double calculate_percentage(struct Student s)
{
    double percentage = 0;
    // Write your code here
    int arrSize = sizeof(s.marks) / sizeof(s.marks[0]);

    for (int i = 0; i < arrSize; ++i)
    {
        percentage += s.marks[i];
    }

    return (percentage / arrSize);
}

int main()
{
    Student input = {"John", {30.500000, 49.700000, 22.300000, 32.900000}};
    std::cout << calculate_percentage(input) << std::endl;
    return 0;
}