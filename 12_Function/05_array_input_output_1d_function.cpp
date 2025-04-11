#include <iostream>
using namespace std;

void createArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at " << i << " index : ";
        cin >> arr[i];
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 3;
    int arr[n];

    createArray(arr, n);
    printArray(arr, n);
}
