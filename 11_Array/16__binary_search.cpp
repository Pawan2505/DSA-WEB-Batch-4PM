#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1; // not found
}

int main()
{
    int n = 10;
    int key = 80;
    int arr[n] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int index = binarySearch(arr, n, key);

    if (index != -1)
    {
        cout << key << " is present at index " << index << "." << endl;
    }
    else
    {
        cout << key << " not found in the array." << endl;
    }
}
