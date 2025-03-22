#include <iostream>
using namespace std;

// Main program
int main()
{
    // Variable initialization
    int num = 1221334, reverse = 0, rem;
    cout << "The number is: " << num << endl;
    ; // Display the original number

    // Loop to find the reverse number
    while (num > 0)
    {
        rem = num % 10;               // Get the last digit of num
        reverse = reverse * 10 + rem; // Build the reverse number
        num /= 10;                    // Remove the last digit
    }

    // Output the reversed number
    cout << "Reversed Number: " << reverse<<endl;

    return 0;
}
