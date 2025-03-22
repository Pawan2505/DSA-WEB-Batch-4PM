#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int num)
{
    int originalNum = num, sum = 0, rem, n = 0;

    // Find the number of digits
    while (num > 0)
    {
        num /= 10;
        ++n;
    }

    num = originalNum; // Restore the original number

    // Calculate the sum of digits raised to the power of n
    while (num > 0)
    {
        rem = num % 10;     // Get the last digit
        sum += pow(rem, n); // Add the nth power of the digit to sum
        num /= 10;          // Remove the last digit
    }

    // Return true if the sum is equal to the original number
    return sum == originalNum;
}

int main()
{
    int lower, upper;

    // Input the range
    cout << "Enter the lower limit: ";
    cin >> lower;
    cout << "Enter the upper limit: ";
    cin >> upper;

    cout << "Armstrong numbers in the range [" << lower << ", " << upper << "] are: ";

    // Check each number in the range
    for (int i = lower; i <= upper; ++i)
    {
        if (isArmstrong(i))
        {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
