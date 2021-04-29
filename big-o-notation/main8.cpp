#include <iostream>

using namespace std;

int main()
{
    // Initialize variable icecream
    int icecream;
    // for loop start
    for (icecream = 5; icecream > 0; icecream--)
    {
        // loop body
        cout << "Number of free ice-creams = " << icecream << endl;
        // continue statement
        if (icecream == 2)
        {
            cout << "Sorry! We ran out of ice-cream" << endl;
            // continue;
            break;
        }
        cout << "Buy an icecream" << endl;
    }
    // Exit loop
    return 0;
}