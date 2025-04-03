#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {12, 34, 56, 45, 98};

    cout << "Array : ";

    // Printing array elements
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}