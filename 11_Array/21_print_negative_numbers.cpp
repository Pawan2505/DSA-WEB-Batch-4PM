#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {12, -232, 45, -67, 78, 23};

    // Print only negative elements
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] < 0)
        {
            cout << arr[i] << " ";
        }
    }
}
