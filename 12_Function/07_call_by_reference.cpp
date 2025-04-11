#include <iostream>
using namespace std;

void valueNum(int &x)
{
    x = x + 2;
}

int main()
{
    int y = 10;
    valueNum(y);
    cout << "Value of y : " << y << endl;
}
