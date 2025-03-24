#include <iostream>
using namespace std;

int main()
{
    // Print a 4x4 square of stars
    for (int row = 1; row <= 4; row++)
    {
        for (int col = 1; col <= 4; col++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
