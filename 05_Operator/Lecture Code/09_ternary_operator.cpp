#include <iostream>
using namespace std;

int main()
{
    // ==========================================
    // 7. Ternary Operator (Conditional Expression)
    // ==========================================
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // The ternary operator works like an if-else
    (age >= 18) ? cout << "You are eligible for voting!" : cout << "Sorry, You are not eligible for voting!" << endl;

    return 0;
}
