#include <iostream>
using namespace std;

int main()
{
    // Declare a constant variable
    const int num = 50;

    // Trying to reassign a constant variable will cause an error
    // num = 500;  // Error: assignment of read-only variable 'num'
    cout << num << endl; // Output: 50

    // Error when declaring an uninitialized const variable
    // const int num1;  // Error: uninitialized const 'num1'
}
