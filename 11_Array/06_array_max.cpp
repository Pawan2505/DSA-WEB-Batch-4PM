#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[8] = {12, 34, 5, 67, 456, 34, 567, 23};

    int maxValue = INT_MIN;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
        }
    }

    cout << "Max element present in array : " << maxValue << endl;
}
