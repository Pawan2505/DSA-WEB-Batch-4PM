#include <iostream>

using namespace std;

void printNumberPattern(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        // Print increasing numbers
        for (int j = i; j <= rows; j++)
        {
            cout << j;
        }

        // Print spaces (twice for symmetry)
        int spaces = i * 2;
        for (int s = 0; s < spaces; s++)
        {
            cout << " ";
        }

        // Print decreasing numbers
        for (int j = rows - i + 1; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
    }
}

int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    printNumberPattern(rows);

    return 0;
}
