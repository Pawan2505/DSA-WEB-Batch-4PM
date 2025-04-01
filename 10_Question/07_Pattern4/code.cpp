#include <iostream>
using namespace std;

int main()
{
    int row = 5;

    for (int i = 1; i <= row; i++)
    {
        if (i == 1 || i == 3 || i == 5)
        {
            for (int star = 1; star <= 5; star++)
            {
                cout << "*";
            }
        }
        else
        {
            if (i == 2)
            {
                cout << "*";
            }
            else
            {
                cout << "    *";
            }
        }
        cout << endl;
    }
}