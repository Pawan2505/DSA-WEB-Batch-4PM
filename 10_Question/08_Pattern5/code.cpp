#include <iostream>
using namespace std;

int main()
{
    int row = 5;


    for (int i = 1; i <= row; i++)
    {
        int num = 41;
        for (int j = row; j >row - i; j--)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
}