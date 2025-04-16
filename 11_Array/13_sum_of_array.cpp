#include <iostream>
using namespace std;

int sumElement(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n = 6;
    int arr[n] = {12, 34, 56, 89, 3, 45};
    int sum = sumElement(arr, n);
    cout << "Sum of all elements in array: " << sum << endl;
}
