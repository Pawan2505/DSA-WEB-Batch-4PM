#include <iostream>
using namespace std;

void createArray(int arr[][2], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element at " << i << " row and " << j << " col : ";
            cin >> arr[i][j];
        }
    }
}

void printArray(int arr[][2], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    const int row = 3;
    const int col = 2;
    int arr[row][col];

    createArray(arr, row, col);
    printArray(arr, row, col);
}
