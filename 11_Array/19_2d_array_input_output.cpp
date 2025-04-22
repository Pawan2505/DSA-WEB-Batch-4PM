#include <iostream>
using namespace std;

int main()
{
    int row = 3;
    int col = 4;
    int arr[row][col];

    // Input loop for 2D array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter data at " << i << " row and " << j << " col: ";
            cin >> arr[i][j];
        }
    }

    // Output loop for 2D array
    cout << "Array:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
