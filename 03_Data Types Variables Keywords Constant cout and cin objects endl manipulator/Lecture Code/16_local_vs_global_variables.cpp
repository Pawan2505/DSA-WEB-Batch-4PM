#include <iostream>
using namespace std;

int num = 10000; // Global variable

int main()
{
    int num = 10; // Local variable within the main function

    {
        int num = 20;                                                       // Local variable within the inner block
        cout << "Local variable (num) inside inner block: " << num << endl; // Output: 20
    }

    // Accessing the local variable in main
    cout << "Local variable (num) in main: " << num << endl; // Output: 10

    // Accessing the global variable
    cout << "Global variable (num): " << ::num << endl; // Output: 10000
}
