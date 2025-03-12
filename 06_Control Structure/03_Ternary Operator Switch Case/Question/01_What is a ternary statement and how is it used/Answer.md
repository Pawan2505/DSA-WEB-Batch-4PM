### **Question:**
**What is a ternary statement and how is it used?**

---

### **Answer:**

A **ternary statement** (also known as a **conditional operator**) is a shorthand way of expressing an `if-else` condition in a single line. It is used to evaluate a condition and return one of two values based on whether the condition is **true** or **false**. The ternary operator is a more compact form of an `if-else` statement, making the code more concise and readable in situations where you need to assign values based on a condition.

---

### **Syntax**:

```cpp
condition ? value_if_true : value_if_false;
```

- **condition**: The condition you want to evaluate (e.g., `x > y`).
- **value_if_true**: The value that is returned if the condition is true.
- **value_if_false**: The value that is returned if the condition is false.

---

### **Example**:

Here’s a concise example using the ternary operator:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    // Using ternary operator to compare 'a' and 'b'
    int max = (a > b) ? a : b;  // If a > b, max = a; else max = b

    cout << "The larger number is: " << max << endl;

    return 0;
}
```

### **Explanation**:
- The condition `(a > b)` is evaluated.
- If the condition is true (i.e., `a > b`), the value of `a` is assigned to `max`.
- If the condition is false (i.e., `b >= a`), the value of `b` is assigned to `max`.

---

### **When to Use**:
The ternary operator is often used when:
- You have a simple `if-else` condition.
- You want to assign a value based on a condition without writing a full `if-else` block.
- You need to keep the code compact and concise.

---

### **Note:**:
The ternary statement is a concise way of writing conditional statements, which improves code readability and reduces the number of lines, especially when assigning values based on a simple condition.

---
