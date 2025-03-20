### Notes on Loops in C++

Loops are an essential concept in programming, and they allow you to repeat a block of code multiple times without writing the same code repeatedly. In C++, there are three types of loops:

1. **For Loop**
2. **While Loop**
3. **Do-While Loop**

### 1. **For Loop**
The **`for` loop** is used when you know the number of iterations in advance.

#### Syntax:
```cpp
for (initialization; condition; increment/decrement) {
    // Code to be executed
}
```

- **Initialization**: This is where you initialize the loop counter (usually a variable like `i`).
- **Condition**: The loop will continue as long as this condition evaluates to true.
- **Increment/Decrement**: This part is used to update the loop counter after each iteration (e.g., `i++` or `i--`).

#### Example:
```cpp
#include<iostream>
using namespace std;

int main() {
    // Print numbers 1 to 5
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    return 0;
}
```

- **Output**: `1 2 3 4 5`

### 2. **While Loop**
The **`while` loop** is used when you want to repeat a block of code as long as a certain condition is true. The condition is checked before each iteration.

#### Syntax:
```cpp
while (condition) {
    // Code to be executed
}
```

- **Condition**: If this condition evaluates to true, the loop will continue executing the block of code. If it's false, the loop ends.

#### Example:
```cpp
#include<iostream>
using namespace std;

int main() {
    int i = 1;
    // Print numbers 1 to 5 using a while loop
    while (i <= 5) {
        cout << i << " ";
        i++;  // Increment i to avoid infinite loop
    }
    return 0;
}
```

- **Output**: `1 2 3 4 5`

### 3. **Do-While Loop**
The **`do-while` loop** is similar to the `while` loop, except the condition is checked after the loop's body has been executed at least once. This ensures the code block runs at least one time, regardless of the condition.

#### Syntax:
```cpp
do {
    // Code to be executed
} while (condition);
```

- **Condition**: The loop will continue to execute as long as this condition is true. However, the condition is checked after the loop’s body, meaning the loop runs at least once.

#### Example:
```cpp
#include<iostream>
using namespace std;

int main() {
    int i = 1;
    // Print numbers 1 to 5 using a do-while loop
    do {
        cout << i << " ";
        i++;  // Increment i
    } while (i <= 5);
    return 0;
}
```

- **Output**: `1 2 3 4 5`

### Key Differences Between the Loops:
| Loop Type       | Condition Check       | Execution Guarantee       | Use Case                              |
|-----------------|-----------------------|---------------------------|---------------------------------------|
| **For Loop**    | Checked before each iteration | Executes a set number of times | When you know the number of iterations |
| **While Loop**  | Checked before each iteration | May never execute if the condition is false | When you don’t know the number of iterations |
| **Do-While Loop** | Checked after each iteration | Executes at least once, even if the condition is false | When you want the loop to execute at least once |

---

### Nested Loops
In C++, you can nest loops inside one another. This means you can have a loop inside another loop, which is often used for problems involving matrices or multi-dimensional arrays.

#### Example of a Nested For Loop:
```cpp
#include<iostream>
using namespace std;

int main() {
    // Nested loop to print a multiplication table
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}
```

- **Output**:
```
1	2	3	4	5	
2	4	6	8	10	
3	6	9	12	15	
4	8	12	16	20	
5	10	15	20	25	
```

### Loop Control Statements

1. **Break Statement**
   - The `break` statement is used to terminate the current loop prematurely, even if the loop condition is true.

   #### Example:
   ```cpp
   #include<iostream>
   using namespace std;

   int main() {
       for (int i = 1; i <= 10; i++) {
           if (i == 5) {
               break; // Exit the loop when i is 5
           }
           cout << i << " ";
       }
       return 0;
   }
   ```
   - **Output**: `1 2 3 4`

2. **Continue Statement**
   - The `continue` statement is used to skip the current iteration of a loop and move to the next iteration.

   #### Example:
   ```cpp
   #include<iostream>
   using namespace std;

   int main() {
       for (int i = 1; i <= 5; i++) {
           if (i == 3) {
               continue; // Skip iteration when i is 3
           }
           cout << i << " ";
       }
       return 0;
   }
   ```
   - **Output**: `1 2 4 5`

3. **Goto Statement (Not Recommended)**
   - The `goto` statement is used to transfer control to another part of the program. It’s generally discouraged because it can make the code hard to read and maintain.

   #### Example:
   ```cpp
   #include<iostream>
   using namespace std;

   int main() {
       int i = 1;
       startLoop:
           if (i <= 5) {
               cout << i << " ";
               i++;
               goto startLoop; // Go back to startLoop label
           }
       return 0;
   }
   ```
   - **Output**: `1 2 3 4 5`

---

### Note:
- **For Loops** are best when you know exactly how many times the loop will run.
- **While Loops** are useful when the condition is evaluated at the beginning, and the number of iterations is not known beforehand.
- **Do-While Loops** guarantee that the loop runs at least once before checking the condition.
