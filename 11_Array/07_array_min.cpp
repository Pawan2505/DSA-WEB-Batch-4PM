#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[8] = {12, 34, 5, 67, 456, 34, 567, 23};

    int minValue = INT_MAX;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] < minValue)
        {
            minValue = arr[i];
        }
    }

    cout << "Min element present in array : " << minValue << endl;
}
