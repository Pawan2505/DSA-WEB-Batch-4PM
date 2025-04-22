#include <iostream>
#include <algorithm>
using namespace std;

void ascdesc(int arr[], int start, int end)
{
    cout << "Original Array: ";
    for (int i = 0; i < end; i++)
        cout << arr[i] << " ";
    cout << endl;

    int mid = start + (end - start) / 2;

    // First half ascending, second half descending
    sort(arr, arr + mid);
    sort(arr + mid, arr + end, greater<int>());

    cout << "Sorted Array: ";
    for (int i = 0; i < end; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {12, 35, 7, 8, 89, 2};
    ascdesc(arr, 0, 6);
}
