#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {12, 34, 5, 67, 456, 34, 567, 23};

    cout << "Original Array : ";
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int key = 67;
    int updated = 66;

    for (int i = 0; i < 8; i++)
    {
        if (key == arr[i])
        {
            arr[i] = updated;
            break;
        }
    }

    cout << "Updated Array : ";
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
