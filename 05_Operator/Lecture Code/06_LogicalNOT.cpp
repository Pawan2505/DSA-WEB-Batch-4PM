// Demonstrates the logical NOT (!) operator

#include <iostream>
using namespace std;

int main()
{
    // Declare two integer variables
    int num1 = 10;
    int num2 = 15;

    // Logical NOT examples
    cout << "!((num1 > num2) || (num1 < num2)) = " << !((num1 > num2) || (num1 < num2)) << endl;   // false (0)
    cout << "!((num1 < num2) || (num1 <= num2)) = " << !((num1 < num2) || (num1 <= num2)) << endl; // false (0)
    cout << "!((num1 >= num2) || (num1 < num2)) = " << !((num1 >= num2) || (num1 < num2)) << endl; // false (0)
    cout << "!((num1 == num2) || (num1 < num2)) = " << !((num1 == num2) || (num1 < num2)) << endl; // false (0)
}
