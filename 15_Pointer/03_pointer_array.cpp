// Accessing array elements using pointer

#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int arr[n] = {12, 34, 56, 78, 90, 67};

    int *ptr = arr; // points to first element of array

    // Printing values using pointer
    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    // Printing addresses using pointer
    for (int i = 0; i < n; i++)
    {
        cout << (ptr + i) << " ";
    }
}
