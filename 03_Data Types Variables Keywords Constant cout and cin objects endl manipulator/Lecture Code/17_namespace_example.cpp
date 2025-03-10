#include <iostream>
using namespace std;

// Define multiple namespaces with the same variable name
namespace na
{
    int num = 10;
}

namespace nb
{
    int num = 46;
}

namespace nc
{
    int num = 50;
}

int main()
{
    // Accessing variables from different namespaces
    cout << "na: " << na::num + 1 << endl; // Output: 11
    cout << "nb: " << nb::num << endl;     // Output: 46
    cout << "nc: " << nc::num << endl;     // Output: 50
}
