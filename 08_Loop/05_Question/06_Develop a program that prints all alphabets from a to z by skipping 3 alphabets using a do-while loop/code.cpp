#include <iostream>
using namespace std;

int main()
{
    char ch = 'a'; // Start with the first alphabet

    // Do-while loop to print alphabets skipping 3 each time
    do
    {
        cout << ch << " "; // Print the current character
        ch += 4;           // Move to the next alphabet, skipping 3 letters
    } while (ch <= 'z'); // Continue until 'z' is exceeded

    cout << endl; // Print a newline after output
    return 0;
}
