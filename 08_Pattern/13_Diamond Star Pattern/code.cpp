#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Enter the number of rows for the diamond (half of the height): ";
    cin >> n;

    // Upper part of the diamond (pyramid)
    for (int row = 1; row <= n; row++) {
        // Print leading spaces for each row
        for (int col = 1; col <= n - row; col++) {
            cout << " ";
        }

        // Print stars in each row
        for (int col = 1; col <= 2 * row - 1; col++) {
            cout << "*";
        }

        // Move to the next line after each row
        cout << endl;
    }

    // Lower part of the diamond (inverted pyramid)
    for (int row = n - 1; row >= 1; row--) {
        // Print leading spaces for each row
        for (int col = 1; col <= n - row; col++) {
            cout << " ";
        }

        // Print stars in each row
        for (int col = 1; col <= 2 * row - 1; col++) {
            cout << "*";
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
