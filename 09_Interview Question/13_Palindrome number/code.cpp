#include <iostream>
using namespace std;

int main()
{
    int num, originalNum, reverse = 0, rem;

    // Input the number
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num; // Save the original number for comparison

    // Loop to reverse the number
    while (num > 0)
    {
        rem = num % 10;               // Extract the last digit
        reverse = reverse * 10 + rem; // Build the reversed number
        num /= 10;                    // Remove the last digit
    }

    // Check if the number is a palindrome
    if (originalNum == reverse)
    {
        cout << originalNum << " is a palindrome number." << endl;
    }
    else
    {
        cout << originalNum << " is not a palindrome number." << endl;
    }

    return 0;
}
