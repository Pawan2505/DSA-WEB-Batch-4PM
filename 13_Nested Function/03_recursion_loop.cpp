#include <iostream>
using namespace std;

int main()
{
    int product = 1;

    for (int i = 1; i <= 5; i++)
    {
        product *= i;
    }

    cout << "Factorial using loop: " << product << endl;
}