#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows for the triangle: ";
    cin >> n;

    // Loop through each row
    for (int row = 1; row <= n; row++)
    {
        // Loop to print stars in each row
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl; // Move to the next line after printing stars
    }

    return 0;
}
