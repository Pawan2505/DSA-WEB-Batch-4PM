#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 6;
    int arr[n] = {12, 35, 7, 8, 89, 2};

    // Sort array in descending order
    sort(arr, arr + n, greater<int>());

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
