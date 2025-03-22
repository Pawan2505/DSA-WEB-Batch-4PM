#include <iostream>
using namespace std;

int main()
{
    int num = 6, fact = 1;

    // Check if the number is negative, as factorial is not defined for negative numbers
    if (num < 0)
    {
        cout << "Not Possible";
    }
    else
    {
        // Calculating the factorial
        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        // Output the factorial
        cout << "Factorial of " << num << ": " << fact;
    }

    return 0;
}
