#include <iostream>
using namespace std;

bool isPrime(int n)
{
    // 0, 1, and negative numbers are not prime
    if (n < 2)
        return false;

    // Checking the number of divisors between 2 and n-1
    for (int i = 2; i * i <= n; i++)
    { // Optimize the loop to check divisors up to sqrt(n)
        if (n % i == 0)
            return false;
    }

    // If reached here, then the number must be prime
    return true;
}

int main()
{
    int lower, upper;

    lower = 1;   // Corrected to semicolon
    upper = 10; // Corrected to semicolon

    for (int i = lower; i <= upper; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

    return 0; // Return statement added for good practice
}
