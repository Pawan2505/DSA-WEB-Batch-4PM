#include <iostream>
using namespace std;

int main()
{
    int base, exponent, result = 1;

    // Taking base and exponent as input
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    // Calculating power using loop
    for (int i = 1; i <= exponent; i++)
    {
        result *= base; // Multiply the base exponent times
    }

    // Output the result
    cout << "Result: " << result << endl;

    return 0;
}
