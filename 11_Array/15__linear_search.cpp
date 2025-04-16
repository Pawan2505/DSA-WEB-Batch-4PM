#include <iostream>
using namespace std;

void linearSearch(int arr[], int n, int key)
{
    bool isPresent = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << key << " key present at " << i << " index." << endl;
            isPresent = true;
        }
    }

    if (!isPresent)
    {
        cout << "Element does not exist!" << endl;
    }
}

int main()
{
    int n = 10;
    int key = 99;
    int arr[n] = {12, 34, 56, 78, 2, 34, 565, 76, 78, 4};
    linearSearch(arr, n, key);
}
