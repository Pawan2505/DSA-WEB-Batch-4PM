#include <iostream>
using namespace std;

int main()
{
    int arr[5][5] = {
        {11, 22, 33, 44, 55},
        {21, 22, 34, 45, 78},
        {44, 55, 67, 89, 90},
        {12, 34, 56, 78, 99},
        {11, 23, 56, 89, 95}};

    int row = 4;
    int col = 0;

    // Printing diagonal from bottom-left to top-right
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[row][col] << " ";
        row--;
        col++;
    }
}
