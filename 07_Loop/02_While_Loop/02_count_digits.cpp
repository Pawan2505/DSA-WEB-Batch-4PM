#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;

    int count = 0;

    while (num > 0)
    {
        num = num / 10;
        count++;
    }

    cout << "Number of digits in number: " << count << endl;
    return 0;
}
