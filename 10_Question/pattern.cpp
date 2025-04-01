#include <iostream>
using namespace std;
int main()
{

    int row = 5;

    for (int i = 1; i <= row; i++)
    {

        for (int j = 1; j <= row; j++)
        {

            if (i == 1 || i == row || i == 3 || i==4 && j==5)
            {
                cout << "* ";
            }
            else if ((i == 2 && j != 1) || (i == 4))
            {
                cout << "_ ";
            }
            else 
            {
                cout << "* ";
            }
        }

        cout << endl;
    }
}