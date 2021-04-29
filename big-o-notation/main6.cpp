#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int *b;

    int c[5][5] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *(*d);

    int e[10] = {100, 20, 31, 34, 5, 1, 3, 2, 34, 5};

    std::sort(e, e + 10);

    for (int i = 0; i < 10; ++i)
    {
        cout << e[i] << endl;
    }

    // b = &a;
    // cout << "b address is " << b << endl;
    // cout << "a address is " << &a << endl;

    // cout << "b address is " << *b << endl;
    // cout << "a address is " << a << endl;

    // *b = 100;
    // cout << "b address is " << b << endl;
    // cout << "a address is " << &a << endl;

    // cout << "b address is " << *b << endl;
    // cout << "a address is " << a << endl;

    // b++;
    // cout << "b address is " << b << endl;
    // cout << "a address is " << &a << endl;

    // cout << "b address is " << *b << endl;
    // cout << "a address is " << a << endl;

    // d = c[0];

    return 0;
}