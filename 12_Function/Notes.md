## 🧠 **Functions in C++ (Notes for Freshers)**
---

### 🔹 What is a Function?
A **function** is a block of code that performs a specific task. Functions help break down large programs into smaller, manageable parts.

---

### 🔹 Why Use Functions?
- **Code Reusability** – Write once, use multiple times.
- **Modularity** – Easy to debug and manage.
- **Readability** – Program becomes more structured and readable.
- **Abstraction** – You focus on *what* a function does, not *how*.

---

### 🔹 Types of Functions
1. **Library Functions** (Built-in)
   - Provided by C++ Standard Library.
   - Example: `printf()`, `cin`, `sqrt()`, etc.

2. **User-defined Functions**
   - Functions created by the programmer.

---

### 🔹 Function Syntax

```cpp
returnType functionName(parameterList) {
    // Function body
}
```

### 🔹 Example
```cpp
int add(int a, int b) {
    return a + b;
}
```

---

### 🔹 Function Components
1. **Function Declaration (Prototype)**  
   Tells the compiler about the function's name, return type, and parameters.
   ```cpp
   int add(int, int);
   ```

2. **Function Definition**  
   Actual code of the function.
   ```cpp
   int add(int a, int b) {
       return a + b;
   }
   ```

3. **Function Call**  
   Invokes the function to execute its code.
   ```cpp
   int result = add(5, 10);
   ```

---

### 🔹 Categories of User-defined Functions

| Category | Takes Input | Returns Output | Example |
|---------|-------------|----------------|---------|
| Type 1  | No          | No             | `void greet()` |
| Type 2  | Yes         | No             | `void display(int n)` |
| Type 3  | Yes         | Yes            | `int sum(int a, int b)` |
| Type 4  | No          | Yes            | `int getRandom()` |

---

### 🔹 Example for Each Type

#### ✅ Type 1: No input, No output
```cpp
void greet() {
    cout << "Hello!" << endl;
}
```

#### ✅ Type 2: Input, No output
```cpp
void display(int x) {
    cout << "Value is " << x << endl;
}
```

#### ✅ Type 3: Input and Output
```cpp
int add(int a, int b) {
    return a + b;
}
```

#### ✅ Type 4: No Input, Output
```cpp
int getNumber() {
    return 100;
}
```

---

### 🔹 Function Overloading (Advanced but Useful)
You can define multiple functions with the same name but different parameters.

```cpp
int add(int a, int b);
float add(float x, float y);
```

---

### 🔹 Passing Parameters

| Type | Description | Example |
|------|-------------|---------|
| Pass by Value | A copy is passed | `void fun(int x)` |
| Pass by Reference | Original is passed | `void fun(int &x)` |

---

### 🔹 Note:
- Keep function names meaningful.
- Use comments for clarity.
- Avoid writing very long functions.
- Use `const` if parameters should not be modified.
