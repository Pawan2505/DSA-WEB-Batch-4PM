#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {10, 22, 23, 90, 50};

    cout << "Array : ";

    // Looping through array elements
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}