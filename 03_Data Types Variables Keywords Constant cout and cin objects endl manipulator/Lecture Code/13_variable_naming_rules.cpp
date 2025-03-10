#include <iostream>
using namespace std;

int main()
{
    // Rule 1: Variable names cannot start with a digit
    // int 123num; // Error: expected unqualified-id before '}' token

    int num12; // Allowed

    // Rule 2: Whitespace is not allowed in variable names
    // string first name; // Error: whitespace not allowed

    string first_name; // Allowed

    // Rule 3: Special characters allowed are _ and $
    int _num; // Allowed
    int num$; // Allowed

    // Rule 4: Variable names are case-sensitive
    int num = 10;
    int Num = 20;
    cout << "num = " << num << endl; // Output: 10
    cout << "Num = " << Num << endl; // Output: 20

    // Rule 5: Reserved keywords cannot be used as variable names
    // int cout = 34;  // Error: cout is a keyword
    // cout << cout << endl;

    // Rule 6: Choose meaningful names
    int num;
    int number; // Better than using a vague name like num
}
