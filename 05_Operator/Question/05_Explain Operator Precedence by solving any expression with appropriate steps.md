### **Operator Precedence in C++**

**Operator precedence** refers to the order in which operators are evaluated in an expression. When an expression contains multiple operators, C++ follows a specific hierarchy to determine the sequence in which they are applied.

The general rule is that operators with **higher precedence** are evaluated first. If two operators have the same precedence, **associativity** (left-to-right or right-to-left) decides the order.

### **Operator Precedence Example**

Let’s break down the following example expression to explain **operator precedence** step by step:

```cpp
int result = 3 + 4 * 5 - 2;
```

### **Step-by-step Breakdown:**

1. **Identify Operators and Their Precedence:**

   - `+`, `-` (Addition and Subtraction) have **lower precedence** than `*` (Multiplication).
   - `*` (Multiplication) has **higher precedence** than `+` and `-`.
   
2. **Step 1: Evaluate the Multiplication First (`*`)**

   According to operator precedence, multiplication has a higher priority than addition and subtraction, so we first evaluate `4 * 5`:
   - `4 * 5 = 20`

   Now, the expression becomes:
   ```cpp
   int result = 3 + 20 - 2;
   ```

3. **Step 2: Evaluate Addition (`+`) and Subtraction (`-`)**

   - Both `+` and `-` have the **same precedence**. In this case, C++ evaluates them from **left to right** (left-to-right associativity).
   
   So, we first evaluate `3 + 20`:
   - `3 + 20 = 23`

   Now, the expression becomes:
   ```cpp
   int result = 23 - 2;
   ```

4. **Step 3: Evaluate Subtraction (`-`)**

   Now, we evaluate `23 - 2`:
   - `23 - 2 = 21`

5. **Final Result:**

   The final result of the expression is `21`.

### **Final Expression Evaluation Order:**

- **Step 1**: Evaluate `4 * 5` → `20`
- **Step 2**: Evaluate `3 + 20` → `23`
- **Step 3**: Evaluate `23 - 2` → `21`

### **Summary of Operator Precedence:**

- **Multiplication (`*`)** has **higher precedence** than addition (`+`) and subtraction (`-`).
- **Addition (`+`)** and **Subtraction (`-`)** have the same precedence and are evaluated from **left to right**.
- **Parentheses `()`** can change the precedence by overriding the default precedence.

---

### **Important Points About Operator Precedence:**

1. **Multiplication (`*`), Division (`/`), and Modulus (`%`)** have the same precedence and **higher** than addition (`+`) and subtraction (`-`).
2. **Addition (`+`) and Subtraction (`-`)** have the same precedence and are evaluated **left to right**.
3. **Parentheses `()`** have the highest precedence. Anything inside parentheses is evaluated first.
4. **Increment (`++`) and Decrement (`--`)** operators have a higher precedence than most other operators (except for parentheses).

---

### **Operator Precedence Table (Summary):**

| Operator                    | Precedence |
|-----------------------------|------------|
| Parentheses `()`             | Highest    |
| Multiplication `*`, Division `/`, Modulus `%` | High       |
| Addition `+`, Subtraction `-` | Lower      |
| Assignment `=`, `+=`, `-=` etc. | Lowest    |

---

### **Example with Parentheses (Changing Precedence)**

Let’s modify the expression and see how parentheses can change the evaluation order:

```cpp
int result = (3 + 4) * 5 - 2;
```

**Step-by-step Breakdown:**

1. **Step 1: Evaluate the Expression Inside Parentheses First:**
   - `(3 + 4) = 7`

   Now, the expression becomes:
   ```cpp
   int result = 7 * 5 - 2;
   ```

2. **Step 2: Evaluate Multiplication (`*`):**
   - `7 * 5 = 35`

   Now, the expression becomes:
   ```cpp
   int result = 35 - 2;
   ```

3. **Step 3: Evaluate Subtraction (`-`):**
   - `35 - 2 = 33`

4. **Final Result:**
   The final result is `33`.

---

### **Note:**

- **Without parentheses**, the multiplication happens first due to its higher precedence, and the expression evaluates to `21`.
- **With parentheses**, the addition happens first, and the expression evaluates to `33`.

This demonstrates how **operator precedence** works in C++, and how parentheses can change the order of operations.

