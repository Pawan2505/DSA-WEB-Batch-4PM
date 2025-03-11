#include <iostream>
using namespace std;

int main()
{

    // ==========================================
    // 1. Arithmetic Operations (+, -, *, /, %)
    // ==========================================
    int num1 = 10;
    int num2 = 5;

    cout << "Arithmetic Operations:" << endl;
    cout << "num1 + num2 = " << num1 + num2 << endl; // Addition
    cout << "num1 - num2 = " << num1 - num2 << endl; // Subtraction
    cout << "num1 * num2 = " << num1 * num2 << endl; // Multiplication
    cout << "num1 / num2 = " << num1 / num2 << endl; // Division
    cout << "num1 % num2 = " << num1 % num2 << endl; // Modulus

    // ==========================================
    // 2. Modulus with Different Numbers
    // ==========================================
    int num3 = 15;
    cout << "\nModulus Operation with num1 = 10 and num3 = 15:" << endl;
    cout << "num1 % num3 = " << num1 % num3 << endl; // Modulus of 10 divided by 15

    // ==========================================
    // 3. Relational Operators (>, <, >=, <=, ==, !=)
    // ==========================================
    cout << "\nRelational Operators:" << endl;
    cout << "num1 > num2 = " << (num1 > num2) << endl;   // false (0)
    cout << "num1 < num2 = " << (num1 < num2) << endl;   // true (1)
    cout << "num1 <= num2 = " << (num1 <= num2) << endl; // true (1)
    cout << "num1 >= num2 = " << (num1 >= num2) << endl; // false (0)
    cout << "num1 == num2 = " << (num1 == num2) << endl; // false (0)
    cout << "num1 != num2 = " << (num1 != num2) << endl; // true (1)

    // ==========================================
    // 4. Logical AND (&&) Operator
    // ==========================================
    cout << "\nLogical AND (&&) Operator:" << endl;
    cout << "((num1 > num2) && (num1 < num2)) = " << ((num1 > num2) && (num1 < num2)) << endl;   // false (0)
    cout << "((num1 < num2) && (num1 <= num2)) = " << ((num1 < num2) && (num1 <= num2)) << endl; // true (1)
    cout << "((num1 >= num2) && (num1 < num2)) = " << ((num1 >= num2) && (num1 < num2)) << endl; // false (0)
    cout << "((num1 == num2) && (num1 < num2)) = " << ((num1 == num2) && (num1 < num2)) << endl; // false (0)

    // ==========================================
    // 5. Logical OR (||) Operator
    // ==========================================
    cout << "\nLogical OR (||) Operator:" << endl;
    cout << "((num1 > num2) || (num1 < num2)) = " << ((num1 > num2) || (num1 < num2)) << endl;   // true (1)
    cout << "((num1 < num2) || (num1 <= num2)) = " << ((num1 < num2) || (num1 <= num2)) << endl; // true (1)
    cout << "((num1 >= num2) || (num1 < num2)) = " << ((num1 >= num2) || (num1 < num2)) << endl; // true (1)
    cout << "((num1 == num2) || (num1 < num2)) = " << ((num1 == num2) || (num1 < num2)) << endl; // true (1)

    // ==========================================
    // 6. Logical NOT (!) Operator
    // ==========================================
    cout << "\nLogical NOT (!) Operator:" << endl;
    cout << "!((num1 > num2) || (num1 < num2)) = " << !((num1 > num2) || (num1 < num2)) << endl;   // false (0)
    cout << "!((num1 < num2) || (num1 <= num2)) = " << !((num1 < num2) || (num1 <= num2)) << endl; // false (0)
    cout << "!((num1 >= num2) || (num1 < num2)) = " << !((num1 >= num2) || (num1 < num2)) << endl; // false (0)
    cout << "!((num1 == num2) || (num1 < num2)) = " << !((num1 == num2) || (num1 < num2)) << endl; // false (0)
    cout << "!((num1 == num2) || (num1 < num2)) = " << !((num1 == num2) || (num1 < num2)) << endl; // false (0)
    cout << "!((num1 > num2) || (num1 == num2)) = " << !((num1 > num2) || (num1 == num2)) << endl; // true (1)

    return 0;
}
