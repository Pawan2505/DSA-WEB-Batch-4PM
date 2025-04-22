#include <iostream>
using namespace std;

int main()
{
    int row = 3;
    int col = 4;

    int arr[row][col] = {
        {12, 34, 56, 78},
        {9, 23, 45, 67},
        {899, 0, 23, 4}};

    arr[2][1] = 100; // Updating element at 2nd row and 1st column

    // Printing 2D array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
