### **Question:**
**Can ternary statements be nested? If yes, share a simple example.**

---

### **Answer:**

Yes, **ternary statements can be nested**. This means you can place one ternary operator inside another to evaluate multiple conditions in a compact and concise way. However, nesting too many ternary operators can make your code harder to read, so it's important to use them judiciously.

### **Syntax for Nested Ternary Operator:**
```cpp
condition1 ? value_if_true : (condition2 ? value_if_true2 : value_if_false2);
```

You can keep nesting as many ternary operators as needed to evaluate more than two conditions.

### **Example of a Nested Ternary Statement:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 5;

    // Nested ternary operator
    int result = (a > b) ? a : (b > c) ? b : c;

    cout << "The largest number is: " << result << endl;

    return 0;
}
```

### **Explanation**:
- The first condition `(a > b)` is checked. If true, `a` is assigned to `result`.
- If the first condition is false, it checks the second condition `(b > c)`. If true, `b` is assigned to `result`.
- If neither condition is true, `c` is assigned to `result`.

### **Output**:
```
The largest number is: 20
```

---
