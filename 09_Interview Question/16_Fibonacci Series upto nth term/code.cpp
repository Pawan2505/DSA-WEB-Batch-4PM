#include <iostream>
using namespace std;

int main()
{
    int num = 15; // Number of Fibonacci terms
    int a = 0, b = 1;

    // Here we are printing 0th and 1st terms
    cout << a << ", " << b;

    int nextTerm;

    // printing the rest of the terms here
    for (int i = 2; i < num; i++)
    {
        nextTerm = a + b;
        a = b;
        b = nextTerm;

        // Print next term, but avoid trailing comma
        cout << ", " << nextTerm;
    }

    cout << endl; // For a clean newline at the end

    return 0;
}
