#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[5][5] = {
        {11, 22, 33, 44, 55},
        {21, 22, 34, 45, 78},
        {44, 55, 67, 89, 90},
        {12, 34, 56, 78, 99},
        {11, 23, 56, 89, 95}};

    int maxElement = INT_MIN;

    // Finding max element in 2D array
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            if (arr[row][col] > maxElement)
            {
                maxElement = arr[row][col];
            }
        }
    }

    cout << "Max Element: " << maxElement << endl;
}
