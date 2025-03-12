### **Syntax of Ladder `if-else`:**

```cpp
if (condition1) {
    // Code to execute if condition1 is true
} else if (condition2) {
    // Code to execute if condition2 is true
} else if (condition3) {
    // Code to execute if condition3 is true
} else {
    // Code to execute if none of the above conditions are true
}
```

- **`if`**: The first condition is checked. If it's true, the corresponding block is executed.
- **`else if`**: If the previous conditions are false, the next condition is checked, and so on.
- **`else`**: This is the final block that will be executed if none of the previous conditions are true.

---

### **Example: Grade Evaluation Using Ladder `if-else`**

This program assigns a grade based on the marks entered by the user using a ladder `if-else`.

```cpp
#include <iostream>
using namespace std;

int main() {
    int marks;

    // Ask the user for marks
    cout << "Enter marks (0 to 100): ";
    cin >> marks;

    // Ladder if-else to determine the grade
    if (marks >= 90) {
        cout << "Grade A" << endl;  // Marks 90 and above
    } else if (marks >= 80) {
        cout << "Grade B" << endl;  // Marks between 80 and 89
    } else if (marks >= 70) {
        cout << "Grade C" << endl;  // Marks between 70 and 79
    } else if (marks >= 60) {
        cout << "Grade D" << endl;  // Marks between 60 and 69
    } else {
        cout << "Grade F" << endl;  // Marks below 60
    }

    return 0;
}
```

### **Explanation:**
1. **Input:** The user is prompted to input marks (between 0 and 100).
2. **Condition Check (Ladder `if-else`):**
   - The program checks the marks in descending order:
     - If the marks are **90 or above**, it prints `"Grade A"`.
     - If the marks are between **80 and 89**, it prints `"Grade B"`.
     - If the marks are between **70 and 79**, it prints `"Grade C"`.
     - If the marks are between **60 and 69**, it prints `"Grade D"`.
     - Otherwise, it prints `"Grade F"` if the marks are below 60.
3. **Output:** The program displays the corresponding grade based on the user's input.

### **Sample Outputs:**

1. **When the user enters `95`:**
   ```
   Enter marks (0 to 100): 95
   Grade A
   ```

2. **When the user enters `82`:**
   ```
   Enter marks (0 to 100): 82
   Grade B
   ```

3. **When the user enters `67`:**
   ```
   Enter marks (0 to 100): 67
   Grade D
   ```

4. **When the user enters `50`:**
   ```
   Enter marks (0 to 100): 50
   Grade F
   ```

---

### **Note:**
In this example:
- The ladder `if-else` is used to check multiple conditions sequentially, and based on the user's input marks, the program evaluates which grade to assign.
- The program efficiently checks for different ranges of marks and assigns the corresponding grade.
- This structure ensures that only one condition is executed, and the rest are skipped once a condition evaluates to true.