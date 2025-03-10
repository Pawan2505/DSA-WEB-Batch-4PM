#include <iostream> // Preprocessor directive to include iostream library

// The `main` function is the entry point of the program
int main()
{

    // In this example, we are using std:: explicitly for `cout` and `endl`
    // This is useful for avoiding the `using namespace std;` which can lead to namespace conflicts.

    std::cout << "Pawan" << std::endl;  // Prints "Pawan" followed by a newline.
    std::cout << "Maurya" << std::endl; // Prints "Maurya" followed by a newline.
    std::cout << "Hey " << std::endl;   // Prints "Hey " followed by a newline.

    return 0; // Return 0 to indicate successful program execution
}
