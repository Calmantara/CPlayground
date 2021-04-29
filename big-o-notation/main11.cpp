// enumClassic.cpp

// #include <iostream>

// int main()
// {

//     std::cout << std::endl;

//     enum Colour
//     {
//         red = 0,
//         green = 2,
//         blue = 100,
//         purple
//     };

//     std::cout << "red: " << Colour::red << std::endl;
//     std::cout << "green: " << Colour::green << std::endl;
//     std::cout << "blue: " << Colour::blue << std::endl;

//     std::cout << "purple: " << Colour::purple << std::endl;

//     int red2 = Colour::red;

//     std::cout << "red2: " << red2 << std::endl;

//     // int red= 5;  ERROR
// }

// enumCast.cpp

#include <iostream>

// enum OldEnum
// {
//     one = 1,
//     ten = 10,
//     hundred = 100,
//     thousand = 1000
// };

// enum struct NewEnum
// {
//     one = 1,
//     ten = 10,
//     hundred = 100,
//     thousand = 10020
// };

// int main()
// {
//     // <built_in - Literal>

//     std::cout << std::endl;

//     std::cout << "C++11= " << 2 * thousand + 0 * hundred + 1 * ten + 1 * one << std::endl;
//     std::cout << "C++11= " << 2 * static_cast<int>(NewEnum::thousand) + 0 * static_cast<int>(NewEnum::hundred) + 1 * static_cast<int>(NewEnum::ten) + 1 * static_cast<int>(NewEnum::one) << std::endl;
// }

// int main()
// {
//     int a = 1;
//     void xyz(int, int);
//     xyz(++a, a++);
//     xyz(a++, ++a);
//     printf("%d", a);
// }
// void xyz(int x, int y)
// {
//     printf("%d%d", x, y);
// }

const enum Alpha {
    X,
    Y = 5,
    Z
};
int p = 10;
int main()
{
    enum Alpha a, b;
    a = X;
    b = Z;
    printf("%d", a + b - p);
    printf("%d", 1 < < 2);
    return 0;
}