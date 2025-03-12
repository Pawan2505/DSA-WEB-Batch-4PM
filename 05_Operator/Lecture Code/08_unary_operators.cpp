#include <iostream>
using namespace std;

int main()
{
    // ==========================================
    // 6. Unary Operators: Pre and Post Increment/Decrement
    // ==========================================
    int a = 10;

    // Pre-increment: Increment happens before the value is used
    cout << ++a << endl; // 11

    // Post-increment: Value is used before incrementing
    cout << a++ << endl; // 11 (printed first, then incremented)
    cout << a << endl;   // 12 (new value after increment)

    // Pre-decrement: Decrement happens before the value is used
    cout << --a << endl; // 11

    // Post-decrement: Value is used before decrementing
    cout << a-- << endl; // 11 (printed first, then decremented)
    cout << a << endl;   // 10 (new value after decrement)

    return 0;
}
