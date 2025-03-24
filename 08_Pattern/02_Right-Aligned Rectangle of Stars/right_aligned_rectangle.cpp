#include <iostream>
using namespace std;

int main()
{
    // Print a right-aligned rectangle of stars
    for (int row = 1; row <= 4; row++)
    {
        // Print spaces for alignment
        for (int space = 1; space <= row - 1; space++)
        {
            cout << " ";
        }

        // Print stars
        for (int star = 1; star <= 4; star++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
