### **Lecture Notes:** Understanding the Ternary Operator and Switch Case in C++

---

#### **1. Introduction to the Ternary Operator**

- **What is the Ternary Operator?**
  - The ternary operator is a shorthand for an `if-else` statement that allows you to assign values or return expressions based on a condition.
  - It is a **conditional operator** and is the only operator in C++ that takes three operands.

- **Syntax of the Ternary Operator:**
  ```cpp
  condition ? expression_if_true : expression_if_false;
  ```
  - `condition`: A boolean expression that is evaluated.
  - `expression_if_true`: The result if the condition is true.
  - `expression_if_false`: The result if the condition is false.
  
  **Example:**
  ```cpp
  int age = 20;
  string result = (age >= 18) ? "Adult" : "Minor";
  cout << result;  // Output: "Adult"
  ```

- **Use Cases of Ternary Operator:**
  - Simplifying conditional assignments.
  - Returning a value based on a condition.
  - Writing cleaner and more concise code, especially for simple conditional assignments.

- **Example:**
  ```cpp
  int a = 10, b = 5;
  int max_value = (a > b) ? a : b;
  cout << "Max value: " << max_value;  // Output: 10
  ```

---

#### **2. Introduction to Switch Case Statement**

- **What is the Switch Case Statement?**
  - The `switch` statement is a control flow structure used to handle multiple conditions based on the value of a single variable or expression.
  - Unlike `if...else`, `switch` is usually more efficient and easier to read when you have many discrete values to compare.

- **Syntax of the Switch Case Statement:**
  ```cpp
  switch (expression) {
      case value1:
          // Code to execute if expression == value1
          break;
      case value2:
          // Code to execute if expression == value2
          break;
      default:
          // Code to execute if no case matches
  }
  ```
  - `expression`: This is the value that is evaluated and compared against each `case`.
  - `case`: Represents the possible values that `expression` might match.
  - `break`: Terminates the switch case block after a match is found. If omitted, it will continue executing subsequent cases (fall-through).
  - `default`: Optionally executed when no `case` matches.

- **Example:**
  ```cpp
  int day = 3;
  switch (day) {
      case 1:
          cout << "Monday"; break;
      case 2:
          cout << "Tuesday"; break;
      case 3:
          cout << "Wednesday"; break;
      case 4:
          cout << "Thursday"; break;
      case 5:
          cout << "Friday"; break;
      default:
          cout << "Invalid day"; break;
  }
  // Output: Wednesday
  ```

- **When to Use Switch Case:**
  - Use `switch` when you have multiple possible values for a single variable (typically integers or characters).
  - It is generally more readable and efficient than using multiple `if...else` statements when checking a large number of specific values.
  - **Note:** In C++, `switch` works with integer types, characters, and enumerated types. It doesn't support floating-point values or strings.

---

#### **3. Best Practices**

- **Ternary Operator:**
  - **Avoid Complex Expressions**: Don't overuse the ternary operator for complex logic; it can lead to unreadable code.
  - **Use for Simple Conditions**: It works best for simple conditions, such as assignments or function returns.
  
  **Example of Bad Practice:**
  ```cpp
  int max_value = (a > b) ? ((a > c) ? a : c) : b;  // Avoid deeply nested ternary operators
  ```

- **Switch Case:**
  - **Always Include a `default` Case**: It's good practice to include a `default` case to handle unexpected inputs.
  - **Avoid Fall-through**: Unless intentionally needed, always use `break` to prevent fall-through from one case to another.
  - **Organize Cases Logically**: Order cases from most common to least common for better readability and potential performance optimization.

  **Example of Bad Practice:**
  ```cpp
  switch (day) {
      case 1:
          cout << "Monday";
      case 2:
          cout << "Tuesday"; // Missing break will cause fall-through
  }
  ```

---

#### **4. Practical Applications**

- **Ternary Operator Example:**
  - **Program to check if a number is even or odd**:
    ```cpp
    int num = 7;
    string result = (num % 2 == 0) ? "Even" : "Odd";
    cout << num << " is " << result;  // Output: 7 is Odd
    ```

- **Switch Case Example:**
  - **Program to simulate a simple calculator:**
    ```cpp
    int num1 = 10, num2 = 20, operation = 2; // 1 for Add, 2 for Subtract
    int result;
    
    switch (operation) {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        default:
            cout << "Invalid operation";
            return;
    }
    cout << "Result: " << result;  // Output: Result: -10
    ```

- **Complex Example:**
  - **Program to assign grades based on marks using both ternary operator and switch case:**
    ```cpp
    int marks = 85;
    char grade;

    // Ternary operator for assigning grade
    grade = (marks >= 90) ? 'A' :
            (marks >= 80) ? 'B' :
            (marks >= 70) ? 'C' : 'D';
    
    cout << "Grade: " << grade;  // Output: Grade: B
    ```

  - **Switch Case for different student actions:**
    ```cpp
    int action = 3; // 1 for Enroll, 2 for View Grades, 3 for Exit
    
    switch (action) {
        case 1:
            cout << "You are now enrolled!";
            break;
        case 2:
            cout << "Viewing grades...";
            break;
        case 3:
            cout << "Exiting...";
            break;
        default:
            cout << "Invalid action.";
            break;
    }
    ```

---
