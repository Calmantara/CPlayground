#include <iostream>
#include <string>

int main()
{
    struct student
    {
        int nim;
        std::string name;
        int className;
    };

    student *students = new student[10];

    for (int i = 0; i < 10; ++i)
    {
        std::string name = "Student name";
        name += std::to_string(i);
        std::cout << name << std::endl;
        students[i].nim = i;
        students[i].name = name;
        students[i].className = i % 2 == 0 ? 12 : 11;
    }

    for (int i = 0; i < 10; ++i)
    {
        std::cout << students[i].nim << "|";
        std::cout << students[i].name << "|";
        std::cout << students[i].className << std::endl;
    }

    const char *str = "This is long sentences that we will read one by one";
    for (int i = 0; i < 10; i++)
    {
        std::cout << str << std::endl;
        str++;
    }

    struct student abc = {1, "hehe", 1};

    std::cout << abc.nim << std::endl;

    return 0;
}