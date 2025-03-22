#include <iostream>
using namespace std;

int main()
{
    int year;

    year = 2020;

    if (year % 400 == 0)
        cout << year << " is a Leap Year";

    else if (year % 4 == 0 && year % 100 != 0)
        cout << year << " is a Leap Year";

    else
        cout << year << " is not a Leap Year";

    return 0;
}