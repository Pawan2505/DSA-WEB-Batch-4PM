// #include<iostream>
// using namespace std;
// int main(){

//     // cout << "Enter Number : ";

//     // cout << "Pawan ";
//     // cout << "Maurya";

//     cout << "Pawan"<<endl;
//     cout << "Maurya"<<endl;
//     cout << "Hey "<<endl;
// }

// #include <iostream>
// // using namespace std;
// int main()
// {

//     // cin,cout,endl -> std
//     // cout << "Enter Number : ";

//     // cout << "Pawan ";
//     // cout << "Maurya";

//     std::cout << "Pawan" << std::endl;
//     std::cout << "Maurya" << std::endl;
//     std::cout << "Hey " << std::endl;
// }

// #include<iostream>

// int main(){
//     using namespace std;
//     // cout << "Enter Number : ";

//     // cout << "Pawan ";
//     // cout << "Maurya";

//     cout << "Pawan"<<endl;
//     cout << "Maurya"<<endl;
//     cout << "Hey "<<endl;
// }

// Filename: using_namespace_global.cpp

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
    cin >> name;

    // Ask for user's age and store it in 'age'
    cout << "Enter your age: ";
    cin >> age;

    // Output the information entered by the user
    cout << "Hello, " << name << "!" << endl;
    cout << "You are " << age << " years old." << endl;

    return 0; // Return 0 to indicate successful execution
}
