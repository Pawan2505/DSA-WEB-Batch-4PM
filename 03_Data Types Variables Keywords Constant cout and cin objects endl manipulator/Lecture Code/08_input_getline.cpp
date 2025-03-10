#include <iostream>
using namespace std;

int main()
{
    // Declare variable
    string name;

    // Ask the user for their name and read it using getline()
    cout << "Please enter your name: ";
    getline(cin, name);

    // Output the name
    cout << "Your name is : " << name << endl;
}
