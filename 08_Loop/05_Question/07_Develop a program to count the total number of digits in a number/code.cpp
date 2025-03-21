#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Handle case for number 0
    if (n == 0)
    {
        cout << "Total number of digits: 1" << endl;
        return 0;
    }

    int count = 0;

    // Loop to count the digits
    while (n != 0)
    {
        n /= 10; // Divide the number by 10
        count++; // Increment the digit count
    }

    // Output the total number of digits
    cout << "Total number of digits: " << count << endl;

    return 0;
}
