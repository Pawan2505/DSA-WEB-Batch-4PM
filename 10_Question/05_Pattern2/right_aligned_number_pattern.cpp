#include <iostream>

using namespace std;

void printRightAlignedPattern(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for (int space = rows; space > i; space--)
        {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = rows - i + 1; j <= rows; j++)
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

    printRightAlignedPattern(rows);

    return 0;
}
