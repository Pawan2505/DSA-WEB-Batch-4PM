// #include <iostream>
// using namespace std;

// int main()
// {

//     // ==========================================
//     // 1. Arithmetic Operations (+, -, *, /, %)
//     // ==========================================
//     int num1 = 10;
//     int num2 = 5;

//     cout << "Arithmetic Operations:" << endl;
//     cout << "num1 + num2 = " << num1 + num2 << endl; // Addition
//     cout << "num1 - num2 = " << num1 - num2 << endl; // Subtraction
//     cout << "num1 * num2 = " << num1 * num2 << endl; // Multiplication
//     cout << "num1 / num2 = " << num1 / num2 << endl; // Division
//     cout << "num1 % num2 = " << num1 % num2 << endl; // Modulus

//     // ==========================================
//     // 2. Modulus with Different Numbers
//     // ==========================================
//     int num3 = 15;
//     cout << "\nModulus Operation with num1 = 10 and num3 = 15:" << endl;
//     cout << "num1 % num3 = " << num1 % num3 << endl; // Modulus of 10 divided by 15

//     // ==========================================
//     // 3. Relational Operators (>, <, >=, <=, ==, !=)
//     // ==========================================
//     cout << "\nRelational Operators:" << endl;
//     cout << "num1 > num2 = " << (num1 > num2) << endl;   // false (0)
//     cout << "num1 < num2 = " << (num1 < num2) << endl;   // true (1)
//     cout << "num1 <= num2 = " << (num1 <= num2) << endl; // true (1)
//     cout << "num1 >= num2 = " << (num1 >= num2) << endl; // false (0)
//     cout << "num1 == num2 = " << (num1 == num2) << endl; // false (0)
//     cout << "num1 != num2 = " << (num1 != num2) << endl; // true (1)

//     // ==========================================
//     // 4. Logical AND (&&) Operator
//     // ==========================================
//     cout << "\nLogical AND (&&) Operator:" << endl;
//     cout << "((num1 > num2) && (num1 < num2)) = " << ((num1 > num2) && (num1 < num2)) << endl;   // false (0)
//     cout << "((num1 < num2) && (num1 <= num2)) = " << ((num1 < num2) && (num1 <= num2)) << endl; // true (1)
//     cout << "((num1 >= num2) && (num1 < num2)) = " << ((num1 >= num2) && (num1 < num2)) << endl; // false (0)
//     cout << "((num1 == num2) && (num1 < num2)) = " << ((num1 == num2) && (num1 < num2)) << endl; // false (0)

//     // ==========================================
//     // 5. Logical OR (||) Operator
//     // ==========================================
//     cout << "\nLogical OR (||) Operator:" << endl;
//     cout << "((num1 > num2) || (num1 < num2)) = " << ((num1 > num2) || (num1 < num2)) << endl;   // true (1)
//     cout << "((num1 < num2) || (num1 <= num2)) = " << ((num1 < num2) || (num1 <= num2)) << endl; // true (1)
//     cout << "((num1 >= num2) || (num1 < num2)) = " << ((num1 >= num2) || (num1 < num2)) << endl; // true (1)
//     cout << "((num1 == num2) || (num1 < num2)) = " << ((num1 == num2) || (num1 < num2)) << endl; // true (1)

//     // ==========================================
//     // 6. Logical NOT (!) Operator
//     // ==========================================
//     cout << "\nLogical NOT (!) Operator:" << endl;
//     cout << "!((num1 > num2) || (num1 < num2)) = " << !((num1 > num2) || (num1 < num2)) << endl;   // false (0)
//     cout << "!((num1 < num2) || (num1 <= num2)) = " << !((num1 < num2) || (num1 <= num2)) << endl; // false (0)
//     cout << "!((num1 >= num2) || (num1 < num2)) = " << !((num1 >= num2) || (num1 < num2)) << endl; // false (0)
//     cout << "!((num1 == num2) || (num1 < num2)) = " << !((num1 == num2) || (num1 < num2)) << endl; // false (0)
//     cout << "!((num1 == num2) || (num1 < num2)) = " << !((num1 == num2) || (num1 < num2)) << endl; // false (0)
//     cout << "!((num1 > num2) || (num1 == num2)) = " << !((num1 > num2) || (num1 == num2)) << endl; // true (1)

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{

    // ==========================================
    // 1. Assignment Operators (+=, -=, *=, /=, %=)
    // ==========================================
    int vishal = 10;

    // Using assignment operator to add 5
    vishal += 5; // vishal = vishal + 5;  => vishal becomes 15

    // Using assignment operator to subtract 2
    vishal -= 2; // vishal = vishal - 2;  => vishal becomes 13

    // Using assignment operator to multiply by 2
    vishal *= 2; // vishal = vishal * 2;  => vishal becomes 26

    // Using assignment operator to divide by 13
    vishal /= 13; // vishal = vishal / 13; => vishal becomes 2

    // Using assignment operator to find remainder when divided by 2
    vishal %= 2; // vishal = vishal % 2;  => vishal becomes 0

    cout << "Total amount : " << vishal << endl; // Output final value (0)

    // ==========================================
    // 2. Unary Operators (Pre/Post Increment/Decrement)
    // ==========================================

    // Pre-increment (increments value first, then uses it)
    int a = 10;
    cout << ++a << endl; // 11 (a is incremented first)

    // Post-increment (uses value first, then increments)
    cout << a++ << endl; // 11 (value used first, then incremented)
    cout << a << endl;   // 12 (a is incremented)

    // Pre-decrement (decrements value first, then uses it)
    cout << --a << endl; // 11 (a is decremented first)

    // Post-decrement (uses value first, then decrements)
    cout << a-- << endl; // 11 (value used first, then decremented)
    cout << a << endl;   // 10 (a is decremented)

    // ==========================================
    // 3. Ternary Operator
    // ==========================================
    // Ternary operator provides a shorthand for an if-else statement.
    // It evaluates a condition and returns one value if true, and another if false.
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // Check if the age is greater than or equal to 18 using ternary operator
    (age >= 18) ? cout << "You are eligible for voting!" : cout << "Sorry, You are not eligible for voting!" << endl;

    // ==========================================
    // 4. Pointer Basics
    // ==========================================
    // Pointers store the memory address of another variable.
    // The '*' is used to dereference a pointer, and '&' is used to get the memory address.

    int aValue = 10;

    // Pointer to int, storing the address of aValue
    int *ptr = &aValue;

    // Output the size of the variable 'aValue'
    cout << "Size of aValue: " << sizeof(aValue) << " bytes" << endl;

    // Output the value of 'aValue' and the value via the pointer 'ptr'
    cout << "Value of aValue: " << aValue << endl;
    cout << "Value pointed by ptr: " << *ptr << endl; // Dereferencing pointer to access value

    // Output the address of 'aValue' and the address stored in the pointer 'ptr'
    cout << "Address of aValue: " << &aValue << endl; // & gives the memory address of aValue
    cout << "Address stored in ptr: " << ptr << endl; // ptr stores the address of aValue

    return 0;
}
