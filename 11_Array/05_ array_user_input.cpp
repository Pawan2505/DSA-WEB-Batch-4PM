#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter length of array : ";
    cin >> n;

    int arr[n];

    // Taking user input for array elements
    for (int i = 0; i < n; i++)
    {
        cout << "Please enter element at " << i << " index :";
        cin >> arr[i];
    }

    cout << "\nArray : " << endl;

    // Printing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}