#include <iostream>
using namespace std;

int main()
{
    int a = 0, count = 0;
    int n = 21;

    // checking the number of divisors b/w 1 and the number n
    for (int i = 1; i < n + 1; i++)
    {
        if (n % i == 0)
            count += 1;
    } // if the number of divisors are > 2 then its not prime else its prime
    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        cout << "The given is number " << n << " is not prime";
    }
    else if (count > 2)
    {
        cout << "The given number " << n << " is not prime";
    }
    else
    {
        cout << "The given number " << n << " is prime";
    }
    return 0;
}