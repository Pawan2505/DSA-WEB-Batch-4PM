#include <iostream>
using namespace std;

int fact(int num)
{
    // Base Condition
    if (num == 1)
    {
        return 1;
    }
    return num * fact(num - 1);
}

int main()
{
    int result = fact(6);
    cout << "Factorial using recursion: " << result << endl;
}