#include <iostream>
using namespace std;

// Function declaration
int add();

int main()
{
    // Function call
    add();
}

// Function definition
int add()
{
    int x = 10;
    int y = 30;
    cout << "Sum : " << x + y << endl;
    return 0;
}