#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n = 6;
    int arr[n] = {12, 34, 56, 89, 3, 45};
    display(arr, n);
}
