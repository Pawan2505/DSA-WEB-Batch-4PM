#include <iostream>
using namespace std;

int primeFun(int num, int i, int count)
{
    if (i == 1)
    {
        return ++count;
    }
    else if (num % i == 0)
    {
        ++count;
        cout << "Count : " << count << endl;
    }

    return primeFun(num, i - 1, count);
}

int main()
{
    int num = 5;
    int count = primeFun(num, num, 0);
    cout << "Final Count : " << count << endl;

    if (count == 2)
    {
        cout << "Prime Number!" << endl;
    }
    else
    {
        cout << "Not Prime Number!" << endl;
    }
}
