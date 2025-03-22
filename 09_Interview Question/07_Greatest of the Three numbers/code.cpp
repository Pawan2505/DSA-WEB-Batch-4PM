#include <iostream>
using namespace std;
int main()
{
    int first, second, third;
    first = 120, second = 820, third = 370;

    // comparing first with other numbers
    if ((first >= second) && (first >= third))
        cout << first << " is the greatest ";

    // comparing Second with other numbers
    else if ((second >= first) && (second >= third))
        cout << second << " is the greatest";

    else
        cout << third << " is the greatest";

    return 0;
}