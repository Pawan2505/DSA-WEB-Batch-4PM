# **C++ Operators**

### 1. **Arithmetic Operators**
Arithmetic operators are used to perform basic arithmetic operations on numeric data types.

| Operator | Description      | Example            |
|----------|------------------|--------------------|
| `+`      | Addition         | `num1 + num2`      |
| `-`      | Subtraction      | `num1 - num2`      |
| `*`      | Multiplication   | `num1 * num2`      |
| `/`      | Division         | `num1 / num2`      |
| `%`      | Modulus (remainder) | `num1 % num2`   |

#### Example:
```cpp
int num1 = 10, num2 = 5;
cout << "num1 + num2 = " << num1 + num2 << endl;  // Output: 15
cout << "num1 - num2 = " << num1 - num2 << endl;  // Output: 5
cout << "num1 * num2 = " << num1 * num2 << endl;  // Output: 50
cout << "num1 / num2 = " << num1 / num2 << endl;  // Output: 2
cout << "num1 % num2 = " << num1 % num2 << endl;  // Output: 0
```

### 2. **Relational Operators**
Relational operators are used to compare two values. They return a boolean result (true or false).

| Operator | Description              | Example          |
|----------|--------------------------|------------------|
| `>`      | Greater than             | `num1 > num2`    |
| `<`      | Less than                | `num1 < num2`    |
| `>=`     | Greater than or equal to | `num1 >= num2`   |
| `<=`     | Less than or equal to    | `num1 <= num2`   |
| `==`     | Equal to                 | `num1 == num2`   |
| `!=`     | Not equal to             | `num1 != num2`   |

#### Example:
```cpp
int num1 = 10, num2 = 15;
cout << "num1 > num2 = " << (num1 > num2) << endl;  // Output: 0 (false)
cout << "num1 < num2 = " << (num1 < num2) << endl;  // Output: 1 (true)
cout << "num1 == num2 = " << (num1 == num2) << endl;  // Output: 0 (false)
```

### 3. **Logical Operators**
Logical operators are used to combine multiple conditions. They return a boolean result based on logical operations.

| Operator | Description                    | Example                   |
|----------|--------------------------------|---------------------------|
| `&&`     | Logical AND (both conditions true) | `(condition1 && condition2)` |
| `||`     | Logical OR (at least one condition true) | `(condition1 || condition2)` |
| `!`      | Logical NOT (negates the condition) | `!(condition)`            |

#### Logical AND (&&):
Both conditions must be true for the result to be true.
```cpp
cout << "((num1 > num2) && (num1 < num2)) = " << ((num1 > num2) && (num1 < num2)) << endl;  // Output: 0 (false)
```

#### Logical OR (||):
At least one condition must be true for the result to be true.
```cpp
cout << "((num1 > num2) || (num1 < num2)) = " << ((num1 > num2) || (num1 < num2)) << endl;  // Output: 1 (true)
```

#### Logical NOT (!):
Negates the condition, turning `true` into `false` and vice versa.
```cpp
cout << "!((num1 > num2) || (num1 < num2)) = " << !((num1 > num2) || (num1 < num2)) << endl;  // Output: 0 (false)
```

---

### **Note:**
- **Arithmetic operators** deal with basic math operations.
- **Relational operators** help compare values, and they return `true` or `false`.
- **Logical operators** are useful for combining multiple conditions and evaluating their truth value.
