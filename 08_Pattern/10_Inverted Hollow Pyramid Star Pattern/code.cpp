#include <iostream>
using namespace std;

int main()
{
    int n; 
    cout << "Enter the number of rows for the inverted hollow pyramid: ";
    cin >> n;

    // Loop for each row of the inverted hollow pyramid
    for (int row = 0; row < n; row++)
    {
        // Print leading spaces for each row (increase as we go down)
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }

        // Print stars and spaces inside the pyramid
        for (int col = 0; col < (2 * (n - row) - 1); col++)
        {
            // Print stars on the borders or the first and last row
            if (row == 0 || row == n - 1 || col == 0 || col == (2 * (n - row) - 2))
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
