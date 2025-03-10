#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    bool istrue = true;
    int num = 10;

    // Output the size of the variables
    cout << "Size of 'istrue': " << sizeof(istrue) << " bytes" << endl; // Size of bool
    cout << "Size of 'num': " << sizeof(num) << " bytes" << endl;       // Size of int

    // Output the name of the type using typeid
    cout << "Type of 'istrue': " << typeid(istrue).name() << endl; // Name of the type of 'istrue'
    cout << "Type of 'num': " << typeid(num).name() << endl;       // Name of the type of 'num'

    return 0;
}
