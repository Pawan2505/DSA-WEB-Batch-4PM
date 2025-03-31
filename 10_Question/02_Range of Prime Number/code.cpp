#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter Number : ";
    cin >> num;

    for (int i = 2; i <= num; i++)
    {

        int count = 0;

        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (i < 2)
        {
            cout << "Please enter valid number." << endl;
        }
        else if (count == 2)
        {
            cout << i << " is prime number." << endl;
        }
    }
}