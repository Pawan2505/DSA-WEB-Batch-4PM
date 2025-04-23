// Basic pointer example - address and value through pointer

#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;

    cout << "ptr : " << ptr << endl; // prints address stored in ptr
    cout << "&x : " << &x << endl;   // prints address of x

    cout << "*ptr : " << *ptr << endl; // value at address (x)
    cout << "x : " << x << endl;       // value of x
    cout << "&ptr : " << &ptr << endl; // address of pointer itself

    int **ptr1 = &ptr; // pointer to pointer

    cout << "**ptr1 : " << **ptr1 << endl; // accessing x through double pointer
}
