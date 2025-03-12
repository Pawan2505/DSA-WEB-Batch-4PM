#include <iostream>
using namespace std;

int main()
{
    // ==========================================
    // Pointer Basics
    // ==========================================
    int a = 10;

    // Pointer declaration and initialization
    int *ptr = &a;

    // sizeof: To get the size of a variable
    cout << "Size of a: " << sizeof(a) << " bytes" << endl;

    // Using the pointer to access the value of a
    cout << "Value of a: " << a << endl;
    cout << "Value pointed by ptr: " << *ptr << endl; // Dereferencing the pointer to get value

    // Accessing the address of variable a
    cout << "Address of a: " << &a << endl;
    cout << "Address stored in ptr: " << ptr << endl;

    return 0;
}
