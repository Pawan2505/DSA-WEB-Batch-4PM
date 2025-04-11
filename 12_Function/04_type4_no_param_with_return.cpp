#include <iostream>
using namespace std;

int add()
{
    int x = 90;
    int y = 100;
    return x + y;
}

int main()
{
    int sum = add();
    cout << "Sum : " << sum << endl;
    return 0;
}
