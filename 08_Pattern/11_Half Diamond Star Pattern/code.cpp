#include <iostream>
using namespace std;

int main()
{
    int n; 
    cout << "Enter the number of rows for the half diamond: ";
    cin >> n;

    // Upper part of the half diamond (increasing stars)
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the half diamond (decreasing stars)
    for (int row = n - 1; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
