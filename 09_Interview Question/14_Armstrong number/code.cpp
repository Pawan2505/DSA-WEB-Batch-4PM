#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, originalNum, sum = 0, rem, n = 0;

    // Input the number
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num; // Save the original number for later comparison

    // Find the number of digits
    while (num > 0)
    {
        num /= 10;
        ++n;
    }

    num = originalNum; // Restore the original number after finding the digit count

    // Calculate the sum of digits raised to the power of n
    while (num > 0)
    {
        rem = num % 10;     // Get the last digit
        sum += pow(rem, n); // Add the nth power of the digit to sum
        num /= 10;          // Remove the last digit
    }

    // Check if the sum is equal to the original number
    if (sum == originalNum)
    {
        cout << originalNum << " is an Armstrong number." << endl;
    }
    else
    {
        cout << originalNum << " is not an Armstrong number." << endl;
    }

    return 0;
}
