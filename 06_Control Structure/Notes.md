## 📘 **Control Structure in C++ Programming**

---

### 🔶 What is a Control Structure?

**Control structures** are the building blocks of decision-making in C++.  
They **control the flow** or direction in which statements are executed.

> Think of them as **traffic signals** – they decide where your program should go next.

---

### 🔷 Types of Control Structures

1. **Sequential Control Structure**  
2. **Decision/Selection Control Structure**  
3. **Looping/Iteration Control Structure**  
4. **Jump Control Structure**

---

## 🔹 1. Sequential Control Structure

- **Default execution**.
- Code runs **line by line**, top to bottom.

```cpp
int a = 10;
int b = 20;
int sum = a + b;
cout << sum;
```

---

## 🔹 2. Selection Control Structure (Conditional Statements)

Used to **make decisions** based on conditions.

### ✅ if Statement
```cpp
if (condition) {
   // block of code
}
```

🧪 Example:
```cpp
int marks = 80;
if (marks > 75) {
    cout << "Excellent!";
}
```

---

### ✅ if-else Statement
```cpp
if (condition) {
   // block if true
} else {
   // block if false
}
```

🧪 Example:
```cpp
int age = 18;
if (age >= 18) {
    cout << "Eligible to vote.";
} else {
    cout << "Not eligible.";
}
```

---

### ✅ else-if Ladder
Used for **multiple conditions**.

```cpp
if (condition1) {
    // block1
} else if (condition2) {
    // block2
} else {
    // default block
}
```

🧪 Example:
```cpp
int marks = 65;
if (marks >= 90) {
    cout << "A Grade";
} else if (marks >= 70) {
    cout << "B Grade";
} else {
    cout << "C Grade";
}
```

---

### ✅ Nested if

if ke andar ek aur if — used for **multi-level decision**.

```cpp
if (condition1) {
   if (condition2) {
       // block
   }
}
```

---

### ✅ switch Statement

Used to **replace multiple if-else**, when you're checking **same variable against multiple values**.

```cpp
switch (expression) {
    case value1:
        // block;
        break;
    case value2:
        // block;
        break;
    default:
        // block;
}
```

🧪 Example:
```cpp
int day = 2;
switch (day) {
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    default: cout << "Invalid";
}
```

---

## 🔹 3. Iteration/Looping Control Structure

Used to **repeat a block of code**.  
Covered in **Loop Notes** (for, while, do-while).

---

## 🔹 4. Jump Control Structure

Used to **change flow of execution** suddenly.

### 👉 `break`  
Exits the loop or switch case.

### 👉 `continue`  
Skips current iteration.

### 👉 `goto`  
Jumps to a labeled statement (not recommended for modern use).

---

## 🔚 Summary Table

| Structure       | Purpose                         | Example Keywords             |
|----------------|----------------------------------|------------------------------|
| Sequential      | Line-by-line execution          | `int`, `cout`, etc.          |
| Selection       | Make decisions                  | `if`, `else`, `switch`       |
| Looping         | Repeat tasks                    | `for`, `while`, `do-while`   |
| Jump            | Alter flow immediately          | `break`, `continue`, `goto`  |

---

## 💡 Interview Tip

- If you’re asked to print a result based on marks/grade/age — use **if-else or switch**.
- For repeating tasks like printing 1 to 10 — use **for loop**.
- For pattern programs — combine **loop + if** logic.
