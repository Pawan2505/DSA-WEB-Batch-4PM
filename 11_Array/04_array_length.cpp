#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 34, 56, 45, 98, 23};
    int length = sizeof(arr) / sizeof(arr[0]); // Calculate number of elements

    cout << "Array : " << endl;

    // Looping through array elements
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}