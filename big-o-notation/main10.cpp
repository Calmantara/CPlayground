#include <iostream>

using namespace std;

// volatile int factor = 100;

// void plusOne(int *param)
// {
//     *param += factor;
// }

// int main()
// {
//     int num = 10;

//     plusOne(&num);

//     cout << num;
// }

// int addFunc(int a, int b) { return a + b; }

// int main()
// {

//     struct AddObj
//     {
//         int operator()(int a, int b) const { return a + b; }
//     };

//     AddObj addObj;
//     cout << (addObj(3, 4) == addFunc(3, 4));
// }

// #include <functional>

// std::function<int(int)> makeLambda(int a)
// {
//     return [a](int b) { return a + b; };
// }

// int sum(int num1, int num2, int num3)
// {
//     return num1 + num2 + num3;
// }
// int sum(int &num1, int num2, int num3, int num4)
// {
//     num1 = 1000;
//     return num1 + num2 + num3 + num4;
// }

// int main()
// {

//     // auto add5 = makeLambda(5);

//     // auto add10 = makeLambda(10);
//     int num1 = 10;

//     cout << sum(num1, 2, 3, 4) << endl;
//     cout << sum(1, 2, 3) << endl;
//     cout << num1;
// }

#include <iostream>

using namespace std;

// Recursive factorial function
int factorial(int n)
{
    // Invalid value
    if (n < 0)
    {
        return -1;
    }
    // Base case
    if (n == 1 || n == 0)
    {
        return 1;
    }
    // Recursive Case
    else
    {
        return n * factorial(n - 1);
    }
}

// main function
int main()
{
    auto n = {5};
    int result;
    // Call factorial function in main and store the returned value in result
    result = factorial(n);
    // Prints value of result
    cout << "Factorial of " << n << " = " << result;
    return 0;
}