#include <iostream>
using namespace std;

int main()
{
    int n; 
    cout << "Enter the size of the square: ";
    cin >> n;

    // Loop for each row
    for (int row = 1; row <= n; row++)
    {
        // Loop for each column in the row
        for (int col = 1; col <= n; col++)
        {
            // If we are on the border (first or last row, or first or last column)
            if (row == 1 || row == n || col == 1 || col == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
