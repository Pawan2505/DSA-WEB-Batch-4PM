#include <iostream>
using namespace std;

int main()
{
    int n; 
    cout << "Enter the number of rows for the inverted pyramid: ";
    cin >> n;

    // Loop for each row of the inverted pyramid
    for (int row = 0; row < n; row++)
    {
        // Print leading spaces for each row (increase as we go down)
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }

        // Print stars for each row (decrease as we go down)
        for (int col = 0; col < (2 * (n - row) - 1); col++)
        {
            cout << "*";
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
