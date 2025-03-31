#include <iostream>

using namespace std;

void printDecreasingNumberTriangle(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        // Print decreasing sequence starting from 'i' to 'row'
        for (int j = i; j <= rows; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    printDecreasingNumberTriangle(rows);

    return 0;
}
