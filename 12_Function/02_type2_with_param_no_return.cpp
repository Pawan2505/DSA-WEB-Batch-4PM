#include <iostream>
using namespace std;

// parameter recieve
int add(int x, int y)
{
    cout << "Sum : " << x + y << endl;
}

int main()
{
    // argument send
    add(50, 60);
}
