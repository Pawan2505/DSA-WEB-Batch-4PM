#include <iostream>
using namespace std;

int main()
{
    // row
    for (int row = 1; row <= 4; row++)
    {
        // column
        for (int col = 1; col <= 4; col++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}