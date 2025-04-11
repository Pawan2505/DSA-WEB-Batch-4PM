#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int sum = add(50, 60);
    cout << "Sum : " << sum << endl;
    return 0;
}
