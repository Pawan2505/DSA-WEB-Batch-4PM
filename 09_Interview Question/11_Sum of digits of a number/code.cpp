#include <iostream>
using namespace std;

int main()
{
    int num = 1234, sum = 0;

    cout << "The number is: " << num << endl;
    ;

    // Loop to find sum of digits
    while (num > 0)
    {
        sum += num % 10; // Add the last digit to sum
        num = num / 10;  // Remove the last digit
    }

    // Output the result
    cout << "Sum of digits: " << sum<<endl;

    return 0;
}
