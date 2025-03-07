## **C++ Lecture Notes: Fundamental Concepts**



### **1. Basic Syntax and Structure**

In C++, every program consists of the following essential components:
- **Header files**: `#include` to include libraries.
- **Main function**: Entry point of the program, where execution starts.
- **Statements and expressions**: C++ code that runs when the program is executed.

---

### **Basic Program Structure Example**:

#### **Program 1: `basic_program.cpp`**

```cpp
// Filename: basic_program.cpp

#include <iostream>  // Include the iostream library for input/output

// Main function: Entry point of the program
int main() {

    // Declare a variable to store a number
    int number;

    // Ask the user to enter a number
    std::cout << "Enter a number: ";
    
    // Read the number from the user
    std::cin >> number;

    // Output the number the user entered
    std::cout << "You entered: " << number << std::endl;

    // Return 0 to indicate successful program execution
    return 0;
}
```

### **Explanation**:
- **Header File**: `#include <iostream>` allows us to use `std::cin` and `std::cout` for input and output.
- **Main Function**: `int main()` is the entry point.
- **Variables**: `int number` declares a variable to store the user input.
- **Input**: `std::cin >> number` takes input from the user.
- **Output**: `std::cout <<` is used to display the output.

---

### **2. Using Namespaces (`using namespace`)**

Namespaces in C++ help organize code into logical groups and prevent name conflicts. The `std` namespace is commonly used in C++ programs.

---

#### **Program 2: `using_namespace_global.cpp`**

```cpp
// Filename: using_namespace_global.cpp

#include <iostream>  // Include the iostream library for input/output

// Use the entire std namespace globally in the program
using namespace std;

// Main function: Entry point of the program
int main() {

    // Declare variables for user input
    string name;
    int age;

    // Ask for user's name and store it in 'name'
    cout << "Enter your name: ";
    getline(cin, name);

    // Ask for user's age and store it in 'age'
    cout << "Enter your age: ";
    cin >> age;

    // Output the information entered by the user
    cout << "Hello, " << name << "!" << endl;
    cout << "You are " << age << " years old." << endl;

    return 0;  // Return 0 to indicate successful execution
}
```

### **Explanation**:
- **`using namespace std;`**: This directive allows the use of standard C++ functions like `cout`, `cin`, and `endl` directly, without needing to prefix them with `std::`.
- **Input/Output**: `cin` and `cout` are used for taking input and displaying output. `getline()` is used for reading full strings with spaces.

---

### **3. Explicitly Using the `std` Namespace**

It is generally a good practice to avoid using `using namespace std;` in large programs, especially in header files, to prevent naming conflicts. Instead, you can explicitly use the `std::` prefix to indicate where the function comes from.

---

#### **Program 3: `output_with_explicit_std_namespace.cpp`**

```cpp
// Filename: output_with_explicit_std_namespace.cpp

#include <iostream>  // Include iostream library for input/output

// Main function: Entry point of the program
int main() {

    // Explicitly use std:: to refer to functions and objects from the std namespace
    std::string name;
    int age;

    // Ask for the user's name and store it
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // Ask for the user's age and store it
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Output the information entered by the user
    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;

    return 0;  // Return 0 to indicate successful program execution
}
```

### **Explanation**:
- **`std::` Prefix**: Explicitly uses `std::cout`, `std::cin`, `std::getline`, and `std::endl` to indicate that they belong to the `std` namespace.
- **Why Use `std::`?**: Avoids potential conflicts with other libraries or functions that might have the same names.

---

### **4. Error Handling and Validation**

It's important to handle errors and validate user input to ensure the program runs smoothly. Below is an example program that handles invalid input for an age field.

---

#### **Program 4: `basic_with_error_handling.cpp`**

```cpp
// Filename: basic_with_error_handling.cpp

#include <iostream>  // Include iostream library for input/output

// Main function: Entry point of the program
int main() {

    int age;

    // Ask for the user's age
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Error handling: Check if the age is valid (positive integer)
    if (age <= 0) {
        std::cerr << "Error: Age must be a positive number!" << std::endl;
        return 1;  // Return an error code to indicate failure
    }

    // Output the user's age
    std::cout << "You are " << age << " years old." << std::endl;

    return 0;  // Return 0 to indicate successful execution
}
```

### **Explanation**:
- **Error Handling**: If the user enters a non-positive age (0 or negative), the program outputs an error message using `std::cerr` and terminates with a non-zero return value.
- **Validation**: The condition `if (age <= 0)` checks if the input is valid before proceeding.

---

## **Note:**

### **Key Concepts Covered**:
1. **Basic Syntax**: Understanding the basic structure of a C++ program, including the `main()` function, input/output, and variable declaration.
2. **Namespaces**: Using `using namespace std;` to simplify code and avoid repetitive `std::` prefixes, and how to use the explicit `std::` prefix to avoid potential naming conflicts.
3. **Error Handling**: Using `std::cerr` for error messages and validating user input (e.g., checking if the entered age is positive).
4. **Good Practices**: Explaining the use of meaningful variable names, commenting code for clarity, and error handling to improve the user experience.

---

