#include <iostream>
using namespace std;

int main() {
    int arr[5][5] = {
        {11, 22, 33, 44, 55},
        {21, 22, 34, 45, 78},
        {44, 55, 67, 89, 90},
        {12, 34, 56, 78, 99},
        {11, 23, 56, 89, 95}
    };

    // Print each column vertically
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 5; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
