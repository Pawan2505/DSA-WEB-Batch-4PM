#include <iostream>
using namespace std;

int main()
{
    int n = 4;    // The number of stars per row
    int rows = 4; // The number of rows in the pattern

    // Loop for the top half of the rhombus (including the middle line)
    for (int i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }

        // Print stars
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    
    return 0;
}
