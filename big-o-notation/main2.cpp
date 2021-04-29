#include <iostream>
#include <queue>
#include <array>
#include <vector>

using namespace std;

vector<int> moveZero(vector<int> &arr)
{
    vector<int> arrNonZero;
    vector<int> arrUnion;

    int arrLength = arr.size();

    for (int i = 0; i < arrLength; ++i)
    {
        if (arr[i] == 0)
        {
            arrUnion.push_back(arr[i]);
        }
        else
        {
            arrNonZero.push_back(arr[i]);
        }
    }
    arrUnion.insert(arrUnion.end(), arrNonZero.begin(), arrNonZero.end());
    // arrUnion.insert(arrUnion.end(), arrNonZero.begin());
    return arrUnion;
}

int main()
{
    vector<int> arrNum = {0, 2, 3, 41, 4, 134, 123, 3, 3, 21, 23, 0, 0, 4, 2, 3, 5, 2, 0};
    vector<int> arrResult;

    int arrLength = arrNum.size();

    arrResult = moveZero(arrNum);

    //print all component array
    for (auto i = arrResult.begin(); i != arrResult.end(); ++i)
    {
        cout << *i << ", ";
    }

    return 1;
}