#include <iostream>
using namespace std;

int main()
{
    int row = 3, col = 4;

    int arr[row][col] = {
        {12, 34, 56, 78},
        {9, 23, 45, 67},
        {899, 0, 23, 4}};

    arr[2][1] = 100;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
