### 1. **Arithmetic Operators**
Arithmetic operators are used to perform basic mathematical operations on variables.

- `+` : Addition
- `-` : Subtraction
- `*` : Multiplication
- `/` : Division
- `%` : Modulus (remainder of a division)

Example:
```cpp
int num1 = 10, num2 = 5;
cout << num1 + num2;  // 15
cout << num1 % num2;  // 0 (remainder of 10/5)
```

---

### 2. **Assignment Operators**
Assignment operators are used to assign values to variables in shorthand.

- `=` : Simple assignment
- `+=` : Add and assign
- `-=` : Subtract and assign
- `*=` : Multiply and assign
- `/=` : Divide and assign
- `%=` : Modulus and assign

Example:
```cpp
int num = 10;
num += 5;  // num = num + 5;  // num becomes 15
num *= 2;  // num = num * 2;  // num becomes 30
```

---

### 3. **Unary Operators**
Unary operators perform operations on a single operand.

- **Pre-increment (`++a`)**: Increments the value before using it.
- **Post-increment (`a++`)**: Uses the value first, then increments it.
- **Pre-decrement (`--a`)**: Decrements the value before using it.
- **Post-decrement (`a--`)**: Uses the value first, then decrements it.

Example:
```cpp
int a = 10;
cout << ++a;  // 11 (pre-increment)
cout << a++;  // 10 (post-increment, then a becomes 11)
```

---

### 4. **Ternary Operator**
The ternary operator is a shorthand for the `if-else` statement. It takes three operands:

```cpp
condition ? expression1 : expression2;
```
If the condition is true, `expression1` is executed; otherwise, `expression2` is executed.

Example:
```cpp
int age = 20;
(age >= 18) ? cout << "Eligible to vote" : cout << "Not eligible to vote";
```

---

### 5. **Pointer Basics**
A pointer is a variable that stores the memory address of another variable.

- **Declaration**: `int* ptr;` — A pointer to an integer.
- **Dereferencing (`*ptr`)**: Accesses the value stored at the address the pointer is pointing to.
- **Address-of operator (`&`)**: Gets the memory address of a variable.

Example:
```cpp
int a = 10;
int* ptr = &a;  // ptr stores the address of a
cout << "Value of a: " << a << endl;   // 10
cout << "Value via ptr: " << *ptr << endl;  // 10
```

---

### 6. **Memory Size with `sizeof()`**
The `sizeof()` operator returns the size, in bytes, of a variable or data type.

Example:
```cpp
int a = 10;
cout << sizeof(a) << endl;  // Prints the size of 'a' (usually 4 bytes)
```

---

### Note:

- **Arithmetic operators** allow basic math operations.
- **Assignment operators** simplify assigning modified values to variables.
- **Unary operators** help in modifying the value of a variable (increment or decrement) before or after using it.
- The **ternary operator** provides a concise way to write conditional logic.
- **Pointers** are variables that hold memory addresses and allow indirect access to other variables.
- Use **sizeof()** to check the memory size of data types and variables.

---

These concepts are foundational in C++ and are used in nearly every C++ program. Understanding how they work and how to apply them will help you write more efficient and powerful code.

---

### Practice Problems:
1. **Arithmetic Operators**: Write a program that asks the user to input two numbers and displays the sum, difference, product, quotient, and remainder.
2. **Assignment Operators**: Write a program to increment and decrement a number using various assignment operators and print the results.
3. **Unary Operators**: Create a program that demonstrates both pre-increment and post-increment with examples.
4. **Ternary Operator**: Write a program that checks whether a user input number is positive, negative, or zero using the ternary operator.
5. **Pointer Basics**: Write a program that demonstrates the use of pointers to store and modify the value of a variable.

---
