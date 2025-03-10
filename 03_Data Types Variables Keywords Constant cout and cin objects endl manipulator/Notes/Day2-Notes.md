## **C++ Basics: Variables, Data Types, and Input/Output**

### **1. Including Libraries**
In C++, we use `#include` to include libraries that provide functionality for tasks like input/output. 

```cpp
#include <iostream> // Includes the iostream library for input/output
```

- `iostream` is used for input and output operations (`cin`, `cout`).

---

### **2. Using the Standard Namespace**
To avoid writing `std::` before standard objects like `cout`, `cin`, `endl`, we can use the `using namespace std;` statement.

```cpp
using namespace std;
```

This allows us to access standard objects without the need for `std::`.

---

### **3. The Main Function**
In every C++ program, the entry point is the `main` function:

```cpp
int main() {
    // Code inside main function
    return 0; // Returns 0 to indicate successful execution
}
```

---

## **Variables and Data Types**

### **4. Declaring Variables**
In C++, we declare variables by specifying the data type followed by the variable name:

```cpp
data_type variable_name;
```

Example:
```cpp
int num;      // Declare an integer variable
float price;  // Declare a float variable
string name;  // Declare a string variable
```

Variables must be initialized before they are used. This can be done at the time of declaration or later.

---

### **5. Data Types**
C++ supports various data types, such as:

- **int**: Used to store integers (whole numbers).
- **float**: Used to store floating-point numbers (numbers with decimals).
- **double**: Used for double-precision floating-point numbers.
- **char**: Used to store single characters.
- **string**: Used to store sequences of characters (text).
- **bool**: Used to store Boolean values (`true` or `false`).

```cpp
int num = 12;         // Integer
float price = 23.45;  // Floating-point number
double value = 12.123456;  // Double precision
char letter = 'A';    // Character
string name = "John"; // String
bool isActive = true; // Boolean
```

---

### **6. Input and Output**

- **`cout`**: Used to output data to the console.
- **`cin`**: Used to input data from the user.

Example:
```cpp
cout << "Enter your name: ";
cin >> name; // Take input for name
cout << "Hello, " << name << "!" << endl; // Output greeting
```

To take multi-word inputs (like names with spaces), use `getline()`:

```cpp
getline(cin, name);  // Takes input with spaces
```

---

## **Working with Constants**

### **7. Constant Variables**
In C++, `const` is used to declare variables that cannot be changed after they are initialized.

```cpp
const int num = 50;  // Constant variable
num = 100;  // Error: Cannot modify constant variable
```

---

## **Size and Type Information**

### **8. Finding the Size of Variables**
The `sizeof` operator returns the size of a data type or variable in bytes.

```cpp
cout << "Size of int: " << sizeof(int) << endl; // Output: 4
cout << "Size of char: " << sizeof(char) << endl; // Output: 1
```

### **9. Type Information with `typeid`**
The `typeid` operator gives information about the type of a variable.

```cpp
cout << "Type of 'num': " << typeid(num).name() << endl;
```

---

## **Memory Allocation: Local vs Global Variables**

### **10. Local and Global Variables**
- **Global Variables**: Declared outside any function, accessible to all functions in the program.
- **Local Variables**: Declared inside a function, only accessible within that function.

Example:

```cpp
int globalVar = 10;  // Global variable

int main() {
    int localVar = 20;  // Local variable
    cout << "Local Var: " << localVar << endl;
    cout << "Global Var: " << globalVar << endl;
    return 0;
}
```

---

## **Namespaces to Avoid Name Conflicts**

### **11. Using Namespaces**
Namespaces allow the use of the same variable names in different scopes without conflict.

```cpp
namespace ns1 {
    int num = 10;
}

namespace ns2 {
    int num = 20;
}

int main() {
    cout << "ns1 num: " << ns1::num << endl; // Output: 10
    cout << "ns2 num: " << ns2::num << endl; // Output: 20
    return 0;
}
```

Namespaces help resolve conflicts when multiple libraries or parts of the program use the same variable names.

---

## **Examples:**

### **Example 1: Taking Input and Output**

**Code:**
```cpp
#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello, " << name << "!" << endl;
    cout << "You are " << age << " years old." << endl;

    return 0;
}
```

- **Explanation**: This program asks for the user's name and age, then outputs a personalized greeting.

---

### **Example 2: Constants and Variables**

**Code:**
```cpp
#include <iostream>
using namespace std;

int main() {
    const int num = 50; // constant variable
    int num2 = 30;      // normal variable

    cout << "num = " << num << endl;
    cout << "num2 = " << num2 << endl;

    // num = 100;  // Error: cannot modify a constant variable
}
```

- **Explanation**: A constant variable is declared with `const`, and we try to modify it (which causes an error).

---

### **Example 3: Using `sizeof` and `typeid`**

**Code:**
```cpp
#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    int num = 10;
    cout << "Size of 'num': " << sizeof(num) << " bytes" << endl;  // Output: Size of 'num': 4 bytes
    cout << "Type of 'num': " << typeid(num).name() << endl;        // Output: Type of 'num': i (int)
}
```

- **Explanation**: The `sizeof` operator returns the size of the variable in bytes, while `typeid` provides the type of the variable.

---

## **Note:**

These concepts and examples form the foundation of C++ programming. By understanding and practicing the use of:

- Variable declaration and initialization
- Taking input/output
- Working with constants and various data types
- Finding the size and type of variables
- Understanding local and global variables
- Using namespaces to avoid conflicts

You can begin to build more complex C++ programs and effectively manage data within your applications.

---
