#include <iostream>
#include <climits>
using namespace std;

int secondLargest(int arr[], int n)
{
    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }

    if(second == INT_MIN)
    {
        cout << "Second largest element not found (all elements might be same)." << endl;
        return -1;
    }

    return second;
}

int main()
{
    int n = 10;
    int arr[n] = {12, 34, 566, 89, 34, 24, 21, 7, 989, 23};

    int secondlargestElement = secondLargest(arr, n);
    if (secondlargestElement != -1)
    {
        cout << "Second largest element : " << secondlargestElement << endl;
    }
}
