#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> n;

    // Loop for each row of the pyramid
    for (int row = 1; row <= n; row++)
    {
        // Print leading spaces for each row
        for (int col = 1; col <= n - row; col++)
        {
            cout << " ";
        }

        // Print stars and spaces inside the pyramid
        for (int col = 1; col <= 2 * row - 1; col++)
        {
            // Print stars on the borders or the first and last row
            if (row == 1 || row == n || col == 1 || col == 2 * row - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
