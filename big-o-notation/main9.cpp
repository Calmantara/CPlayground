#include <iostream>

using namespace std;

int main()
{
    // Initialize variables
    int decimal = 3, binary = 0;
    int remainder, product = 1;
    // Prints value of decimal
    cout << "Decimal Number = " << decimal << endl;
    // while block
    /*Checks if the value of `decimal` is not equal to `0`. 
  If yes, then execute line No. 17 to 21.
  If no, then execute line No. 23.
  */
    while (decimal != 0)
    {
        remainder = decimal % 2;
        binary = binary + (remainder * product);
        decimal = decimal / 2;
        product *= 10;
    }
    // while exit
    cout << "Binary Number = " << binary;
    return 0;
}