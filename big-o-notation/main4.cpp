#include <iostream>
#include <vector>

using namespace std;

bool SumOfNum(vector<int> &arr, int sum)
{
    bool result = false;

    int startId = 0;
    int endId = arr.size() - 1;
    int startElm = arr[startId];
    int endElm = arr[endId];

    while (!result && startId < endId)
    {
        if (endElm >= sum)
        {
            endId--;
            endElm = arr[endId];
        }
        else if (endElm + startElm != sum)
        {
            startId++;
            startElm = arr[startId];
        }
        else
        {
            result = true;
            break;
        }
    }

    return result;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 5, 6, 8, 10, 12, 33, 45, 56, 60};
    vector<int> arr2 = {57, 35, 10, 116, 3, 4, 5, 100};

    for (int i = 0; i < arr2.size(); ++i)
    {
        bool res = SumOfNum(arr1, arr2[i]);
        cout << "Arr of sum: " << arr2[i] << " is " << res << endl;
    }

    return 0;
}