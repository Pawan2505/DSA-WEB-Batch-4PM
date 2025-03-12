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

// #include <iostream>
// using namespace std;

// int main()
// {

//     // Assignment Operator

//     int vishal = 10;

//     // vishal = vishal + 5;

//     // or

//     vishal += 5;  // 15

//     // vishal = vishal - 2

//     vishal -= 2; // 13

//     vishal *= 2; //26

//     vishal /= 13;  //2

//     vishal %= 2;

//     cout << "Total amount : " << vishal << endl;
// }

// uniary operator :

/*

1. pre - increment-> ++a => isme sabse phle increment hota hai fir value used hota hai.
2. post - increment-> a++ => sabse phle value use hota hai fir increment hota hai.
3. pre - decrement-> --a => isme sabse phle decrement hota hai fir value used hota hai.
4. post - decrement -> a-- => sabse phle value use hota hai fir decrement hota hai.

*/

// #include<iostream>
// using namespace std;

// int main(){

//     int a = 10;

//     cout << ++a << endl; // 11
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int a = 10;

//     cout << a++ << endl; // 10

//     cout << a << endl; //11
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int a = 10;

//     cout << --a << endl; // 9

//     cout << ++a << endl; // 10
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int a = 10;

//     cout << a-- << endl; // 10

//     cout << ++a << endl; // 10
// }

// Ternary Operator

// #include <iostream>
// using namespace std;

// int main()
// {

//     int age;
//     cout << "Enter your age : ";
//     cin >> age;

//     (age >= 18) ? cout << "You are eligible for vote!" : cout << "Sorry, You are not eligible for vote!"<<endl;
// }

// Pointer -> *

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     int *ptr = &a;

//     // sizeof()

//     cout << "size of a : " << sizeof(a) << endl;

//     // value
//     cout << "Value of a : " << a << endl;
//     cout << "value of *ptr : " << *ptr << endl;
//     // address

//     cout << "address of a : " << &a << endl;
//     cout << "address store at ptr : " << ptr << endl;
// }