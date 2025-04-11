#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {12, 34, 5, 67, 456, 34, 567, 23};
    int sum = 0;

    for (int i = 0; i < 8; i++)
    {
        sum += arr[i];
    }

    cout << "Sum of all elements of array : " << sum << endl;
}
