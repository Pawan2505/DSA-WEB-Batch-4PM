#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {12, 34, 56, 67, 90};
    int position = 2;

    for (int i = position; i < 4; i++)
    {
        arr[i] = arr[i + 1];
    }

    cout << "Array after deletion: ";
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
