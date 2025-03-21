#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cout << "Enter a number: ";
    cin >> N;

    // To handle negative numbers
    N = abs(N); // Ensure the number is positive

    // Extract the last digit
    int lastDigit = N % 10;

    // Extract the first digit by repeatedly dividing N by 10
    int firstDigit = N;
    while (firstDigit >= 10)
    {
        firstDigit /= 10;
    }

    // Calculate the sum of the first and last digits
    int sum = firstDigit + lastDigit;

    // Output the sum
    cout << "Sum of the first and last digits: " << sum << endl;

    return 0;
}
