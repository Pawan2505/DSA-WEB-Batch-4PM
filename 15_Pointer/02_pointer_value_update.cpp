// Updating value of variable using pointer

#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    cout << "x : " << x << endl;

    int *ptr = &x;
    *ptr = 1000; // updating value through pointer

    cout << "x : " << x << endl;
    cout << "*ptr : " << *ptr << endl;
}
