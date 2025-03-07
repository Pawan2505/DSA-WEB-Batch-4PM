#include <iostream> // Include the iostream library for input/output

// Use the entire std namespace globally in the program
using namespace std;

// Main function: entry point of the program
int main()
{

    // Now, we can use cout, cin, and endl without the std:: prefix
    string name;
    int age;

    // Ask for user's name and store it in 'name'
    cout << "Enter your name: ";
    // getline(cin, name);
    cin >> name;

    // Ask for user's age and store it in 'age'
    cout << "Enter your age: ";
    cin >> age;

    // Output the information entered by the user
    cout << "Hello, " << name << "!" << endl;
    cout << "You are " << age << " years old." << endl;

    return 0; // Return 0 to indicate successful execution
}
