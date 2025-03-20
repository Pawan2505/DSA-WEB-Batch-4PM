#include <iostream>
using namespace std;

int main()
{
    // Declare a variable to store the starting number
    int start;

    // Prompt the user to enter the starting number
    cout << "Enter starting number: ";
    cin >> start;

    // Declare a variable to store the last number
    int end;

    // Prompt the user to enter the last number
    cout << "Enter last number: ";
    cin >> end;

    // Loop through the numbers from start to end (inclusive)
    for (int i = start; i <= end; i++)
    {
        // Output each number followed by a space
        cout << i << " ";
    }

    // Optional: Print a newline after the loop to make the output cleaner
    cout << endl;

    return 0;
}
