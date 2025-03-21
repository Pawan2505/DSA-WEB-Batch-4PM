### Notes on the **`do-while` Loop** in C++

The **`do-while` loop** in C++ is a type of loop that is similar to the `while` loop but with one key difference: the **condition** is checked **after** the loop body is executed. This means that the code inside the loop will execute **at least once**, even if the condition is false initially.

---

### **Syntax of a `do-while` Loop**

```cpp
do {
    // Code to be executed
} while (condition);
```

1. **Code Block**: The code inside the curly braces `{}` will be executed at least once.
2. **Condition**: After executing the code block, the loop will check the condition. If the condition is `true`, the loop will execute again. If the condition is `false`, the loop will stop.

### **Key Points about `do-while` Loop**
- **Guaranteed Execution**: The code inside the loop is executed **at least once**, because the condition is checked **after** the code is executed.
- **Condition Check**: The loop continues to execute as long as the condition evaluates to `true`. Once the condition evaluates to `false`, the loop terminates.
- **Post-Test Loop**: The `do-while` loop is a **post-test loop**, meaning the condition is evaluated after the body of the loop is executed.

---

### **Basic Example of a `do-while` Loop**

Let’s start with a simple example that prints numbers from 1 to 5 using a `do-while` loop.

```cpp
#include<iostream>
using namespace std;

int main() {
    int i = 1;

    do {
        cout << i << " ";
        i++;  // Increment the value of i
    } while (i <= 5);

    return 0;
}
```

**Explanation**:
- **First Iteration**: The loop will print `1`, and then `i` is incremented to `2`.
- **Condition Check**: After printing the value of `i`, the condition `i <= 5` is checked. If it's `true`, the loop continues.
- **Termination**: Once `i` exceeds `5`, the loop stops.

**Output**:
```
1 2 3 4 5
```

---

### **Differences Between `do-while` and `while` Loop**

| Feature                          | `while` Loop                               | `do-while` Loop                             |
|-----------------------------------|--------------------------------------------|--------------------------------------------|
| **Condition Check**               | Checked before executing the loop body     | Checked after executing the loop body      |
| **Guaranteed Execution**          | May not execute at all if the condition is false | Always executes at least once, even if the condition is false |
| **Use Case**                      | Used when you may not need to execute the loop body at all | Used when the loop body should run at least once, even if the condition is false |

---

### **Example 2: Repeated User Input**

In this example, the `do-while` loop will repeatedly ask the user to input a number until they enter a negative number to stop.

```cpp
#include<iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "Enter a number (negative to stop): ";
        cin >> num;
        cout << "You entered: " << num << endl;
    } while (num >= 0);  // Repeat as long as the number is non-negative

    cout << "Program ended because you entered a negative number." << endl;
    return 0;
}
```

**Explanation**:
- The program will keep asking for input and display the entered number.
- When the user enters a negative number, the loop will stop.

**Output**:
```
Enter a number (negative to stop): 10
You entered: 10
Enter a number (negative to stop): 5
You entered: 5
Enter a number (negative to stop): -1
You entered: -1
Program ended because you entered a negative number.
```

---

### **Example 3: Asking for Confirmation**

A common use case for a `do-while` loop is asking for confirmation from the user (like “Do you want to continue?”). The loop will continue as long as the user says "yes".

```cpp
#include<iostream>
using namespace std;

int main() {
    char choice;

    do {
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');  // Continue if user enters 'y' or 'Y'

    cout << "Program ended." << endl;
    return 0;
}
```

**Explanation**:
- The program will repeatedly ask the user whether they want to continue.
- If the user enters `y` or `Y`, the loop will continue; otherwise, it will stop.

**Output**:
```
Do you want to continue? (y/n): y
Do you want to continue? (y/n): Y
Do you want to continue? (y/n): n
Program ended.
```

---

### **Common Mistakes with `do-while` Loop**

1. **Forgetting to Update the Condition**:
   Just like the `while` loop, forgetting to update the condition (e.g., not incrementing a variable) inside the loop can lead to **infinite loops**.

   ```cpp
   int i = 1;
   do {
       cout << i << " ";  // Printing the value of i
       // Missing i++ will cause the loop to run infinitely
   } while (i <= 5);
   ```

   **Solution**: Ensure the loop control variable is updated properly within the loop body.

2. **Incorrect Termination Condition**:
   Be careful when writing the termination condition. If the condition is incorrect, the loop may not terminate as expected.

   ```cpp
   int i = 1;
   do {
       cout << i << " ";
       i--;  // Decrementing instead of incrementing will cause an infinite loop
   } while (i <= 5);
   ```

   **Solution**: Ensure the condition makes sense logically for the program's flow.

---

### **Control Statements in `do-while` Loop**

Just like other loops, you can use **`break`** and **`continue`** inside a `do-while` loop.

1. **`break` Statement**: 
   The `break` statement can be used to exit the loop immediately, even if the condition is still true.

   Example:
   ```cpp
   #include<iostream>
   using namespace std;

   int main() {
       int i = 1;

       do {
           if (i == 4) {
               break;  // Exit the loop when i reaches 4
           }
           cout << i << " ";
           i++;
       } while (i <= 5);

       cout << "Exited the loop." << endl;
       return 0;
   }
   ```

   **Output**:
   ```
   1 2 3 Exited the loop.
   ```

2. **`continue` Statement**: 
   The `continue` statement skips the current iteration of the loop and moves to the next iteration.

   Example:
   ```cpp
   #include<iostream>
   using namespace std;

   int main() {
       int i = 0;

       do {
           i++;
           if (i == 3) {
               continue;  // Skip this iteration when i is 3
           }
           cout << i << " ";
       } while (i < 5);

       return 0;
   }
   ```

   **Output**:
   ```
   1 2 4 5
   ```

---

### **Nested `do-while` Loops**

You can also have a **nested `do-while` loop**, where one `do-while` loop is placed inside another. This is useful for multi-dimensional structures or more complex repetitive tasks.

Example:
```cpp
#include<iostream>
using namespace std;

int main() {
    int i = 1;

    // Outer do-while loop
    do {
        int j = 1;
        cout << "Outer loop iteration " << i << endl;

        // Inner do-while loop
        do {
            cout << " Inner loop iteration " << j << endl;
            j++;
        } while (j <= 3);

        i++;
    } while (i <= 2);

    return 0;
}
```

**Output**:
```
Outer loop iteration 1
 Inner loop iteration 1
 Inner loop iteration 2
 Inner loop iteration 3
Outer loop iteration 2
 Inner loop iteration 1
 Inner loop iteration 2
 Inner loop iteration 3
```

---

### **Note:**

The **`do-while` loop** is a powerful looping construct in C++ that guarantees the loop body will execute **at least once**. It's ideal for scenarios where you need to prompt the user for input or perform a task that must happen at least once, even if the condition to continue isn't true initially.

- The condition in a `do-while` loop is checked **after** the loop body, meaning the body will execute at least once.
- Use `do-while` when you need a **guaranteed execution** of the loop body, such as asking for user input until valid data is entered.
- Be careful with the termination condition to avoid **infinite loops**.
- The loop can be controlled using **`break`** and **`continue`** statements for more complex behaviors.
---