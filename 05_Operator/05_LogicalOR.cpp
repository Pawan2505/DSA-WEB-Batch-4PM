// Demonstrates the logical OR (||) operator

#include <iostream>
using namespace std;

int main()
{
    // Declare two integer variables
    int num1 = 10;
    int num2 = 15;

    // Logical OR examples
    cout << "((num1 > num2) || (num1 < num2)) = " << ((num1 > num2) || (num1 < num2)) << endl;   // true (1)
    cout << "((num1 < num2) || (num1 <= num2)) = " << ((num1 < num2) || (num1 <= num2)) << endl; // true (1)
    cout << "((num1 >= num2) || (num1 < num2)) = " << ((num1 >= num2) || (num1 < num2)) << endl; // true (1)
    cout << "((num1 == num2) || (num1 < num2)) = " << ((num1 == num2) || (num1 < num2)) << endl; // true (1)
}
