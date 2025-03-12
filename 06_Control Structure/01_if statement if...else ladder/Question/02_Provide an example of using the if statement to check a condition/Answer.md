### **Example: Check if a Number is Positive, Negative, or Zero**

Let's say we want to write a program that checks whether a given number is positive, negative, or zero.

```cpp
#include <iostream>
using namespace std;

int main() {
    int number;

    // Ask the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is positive, negative, or zero using if statement
    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
```

### **Explanation:**
1. The program prompts the user to input a number.
2. The `if` statement checks if the number is greater than 0. If it is, it prints "The number is positive."
3. The `else if` condition checks if the number is less than 0. If it is, it prints "The number is negative."
4. If neither of the above conditions is true (i.e., the number is 0), the `else` block is executed, and it prints "The number is zero."

### **Sample Output:**
1. If the user inputs `5`:
   ```
   Enter a number: 5
   The number is positive.
   ```

2. If the user inputs `-3`:
   ```
   Enter a number: -3
   The number is negative.
   ```

3. If the user inputs `0`:
   ```
   Enter a number: 0
   The number is zero.
   ```
