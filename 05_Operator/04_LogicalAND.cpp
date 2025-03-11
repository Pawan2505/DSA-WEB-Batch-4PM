// Demonstrates the logical AND (&&) operator

#include <iostream>
using namespace std;

int main()
{
    // Declare two integer variables
    int num1 = 10;
    int num2 = 15;

    // Logical AND examples
    cout << "((num1 > num2) && (num1 < num2)) = " << ((num1 > num2) && (num1 < num2)) << endl;   // false (0)
    cout << "((num1 < num2) && (num1 <= num2)) = " << ((num1 < num2) && (num1 <= num2)) << endl; // true (1)
    cout << "((num1 >= num2) && (num1 < num2)) = " << ((num1 >= num2) && (num1 < num2)) << endl; // false (0)
    cout << "((num1 == num2) && (num1 < num2)) = " << ((num1 == num2) && (num1 < num2)) << endl; // false (0)
}
