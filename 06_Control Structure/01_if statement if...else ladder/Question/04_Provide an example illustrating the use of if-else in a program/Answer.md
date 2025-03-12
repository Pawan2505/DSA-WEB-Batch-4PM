### **Check If a Number is Even or Odd Using `if-else`**

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;

    // Ask the user to enter a number
    cout << "Enter a number: ";
    cin >> num;

    // Use the if-else statement to check if the number is even or odd
    if (num % 2 == 0) {
        cout << num << " is even." << endl;  // This block is executed if the number is even
    } else {
        cout << num << " is odd." << endl;   // This block is executed if the number is odd
    }

    return 0;
}
```

### **Explanation:**
1. **Input:** The program asks the user to enter a number using `cin`.
2. **Condition Check:** The `if` statement checks whether the number is even by evaluating `num % 2 == 0`. The modulus operator `%` gives the remainder when dividing by 2:
   - If the remainder is 0, the number is even.
   - If the remainder is not 0, the number is odd.
3. **Output:** Based on the result of the condition:
   - If the number is even, it prints `"The number is even."`.
   - If the number is odd, it prints `"The number is odd."`.

### **Sample Output:**

1. **When the user enters an even number (e.g., 6):**
   ```
   Enter a number: 6
   6 is even.
   ```

2. **When the user enters an odd number (e.g., 7):**
   ```
   Enter a number: 7
   7 is odd.
   ```

### **Note:**
In this example:
- The `if-else` statement allows us to make a decision: check whether a number is even or odd and display the corresponding message.
- The program is simple but clearly illustrates the use of the `if-else` construct to handle two possible conditions based on a given input.