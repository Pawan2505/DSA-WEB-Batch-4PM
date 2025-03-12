### **Syntax of the `if-else` Statement:**

The `if-else` statement is used to execute one block of code if a condition is true, and a different block of code if the condition is false. It allows us to make decisions based on conditions.

#### **Basic Syntax:**

```cpp
if (condition) {
    // Code to execute if the condition is true
} else {
    // Code to execute if the condition is false
}
```

- **condition**: This is an expression that evaluates to `true` or `false` (a boolean expression). 
- If the `condition` is **true**, the code inside the first block (after the `if`) is executed.
- If the `condition` is **false**, the code inside the `else` block is executed.

### **Example:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;

    // Ask the user for input
    cout << "Enter a number: ";
    cin >> num;

    // Using the if-else statement to check the number
    if (num > 0) {
        cout << "The number is positive." << endl;
    } else {
        cout << "The number is zero or negative." << endl;
    }

    return 0;
}
```

### **Explanation:**
- The program checks if the `num` entered by the user is greater than 0 using the `if` condition.
- If the `num > 0`, the program prints `"The number is positive."`
- If the condition is **false** (i.e., `num` is 0 or negative), the program prints `"The number is zero or negative."` as part of the `else` block.

### **Output Examples:**
1. **When the user enters a positive number (e.g., 5):**
   ```
   Enter a number: 5
   The number is positive.
   ```
2. **When the user enters zero (0):**
   ```
   Enter a number: 0
   The number is zero or negative.
   ```
3. **When the user enters a negative number (e.g., -3):**
   ```
   Enter a number: -3
   The number is zero or negative.
   ```

### **Note:**
- The `if-else` statement evaluates the `condition`.
- If the condition is **true**, the code in the `if` block is executed.
- If the condition is **false**, the code in the `else` block is executed.
