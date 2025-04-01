#include <iostream>
using namespace std;

int main()
{
    int row = 4;
    int num = 11;
    for (int i = 1; i <= row; i++)
    {

        for (int j = row; j > row - i; j--)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
}