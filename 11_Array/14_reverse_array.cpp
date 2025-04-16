#include <iostream>
using namespace std;

void reverseArray(int *arr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n = 6;
    int arr[n] = {12, 34, 56, 89, 3, 45};

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Reversed Array: ";
    reverseArray(arr, n);
}
