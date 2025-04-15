#include <iostream>
#include <climits>
using namespace std;

int secondSmallest(int arr[], int n)
{
    int first = INT_MAX;
    int second = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second && arr[i] != first)
        {
            second = arr[i];
        }
    }

    return second;
}

int main()
{
    int n = 10;
    int arr[n] = {12, 34, 566, 89, 34, 24, 21, 15, 989, 23};

    int secondsmallest = secondSmallest(arr, n);
    cout << "Second smallest element : " << secondsmallest << endl;
}
