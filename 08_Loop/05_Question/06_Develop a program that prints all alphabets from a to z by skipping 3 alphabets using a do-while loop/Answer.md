### **Program to Print Alphabets Skipping 3 Each Time**

#### **Program Overview:**
This program prints all the alphabets from `a` to `z` while skipping 3 alphabets between each printed character using a **do-while loop**. It demonstrates how to iterate through a series of characters with specific increments and utilize control flow mechanisms such as a do-while loop to achieve the desired result.

---

### **Key Concepts Covered:**

1. **Character Manipulation in C++:**
   - In C++, characters are treated as integers based on their **ASCII values**. For example, `'a'` has an ASCII value of `97`, and `'z'` has an ASCII value of `122`. This allows arithmetic operations to be performed on characters.

2. **Do-While Loop:**
   - A **do-while loop** is a type of loop in C++ that guarantees the loop's body will execute at least once, even if the condition is initially false. The condition is checked **after** the loop body has executed.
   - The syntax of a do-while loop:
     ```cpp
     do {
         // Loop body
     } while (condition);
     ```

3. **Character Increment:**
   - In this program, we increment the character `ch` by 4 using the statement `ch += 4;`. Since characters are essentially integers in C++, adding 4 to `ch` moves to the next character in the alphabet, skipping 3 intermediate characters.
   
4. **Program Flow:**
   - The loop starts with the character `'a'` and prints it.
   - Then, the character `ch` is incremented by 4 (`ch += 4`), meaning it skips the next three alphabets.
   - This continues until `ch` exceeds `'z'`, at which point the loop stops.

---

### **Code Breakdown:**

```cpp
#include <iostream>
using namespace std;

int main()
{
    char ch = 'a'; // Initialize the first character as 'a'

    // Do-while loop to print alphabets skipping 3 each time
    do
    {
        cout << ch << " "; // Print the current character
        ch += 4;           // Move to the next alphabet, skipping 3 letters
    } while (ch <= 'z'); // Continue until 'z' is exceeded

    cout << endl; // Print a newline after output
    return 0;
}
```

1. **Line 1-2:** 
   - `#include <iostream>` is included to allow input and output operations. The `using namespace std;` statement avoids the need to prepend `std::` to every standard library function, such as `cout`.

2. **Line 4-5:**
   - The `main()` function begins, and we initialize the character variable `ch` with the value `'a'`, which represents the first letter of the alphabet.

3. **Line 7-10:**
   - A **do-while loop** is used. The loop prints the current value of `ch` (the alphabet) followed by a space.
   - After printing, `ch += 4;` increments the current character by 4, effectively skipping 3 alphabets (e.g., from `a` to `e`, from `e` to `i`, and so on).
   - The condition `ch <= 'z'` checks if the current value of `ch` is still within the alphabet range. If it exceeds `'z'`, the loop will stop.

4. **Line 11:** 
   - After the loop completes, `cout << endl;` prints a newline to format the output cleanly.

5. **Line 12:** 
   - The `main()` function returns 0, indicating successful execution.

---

### **Explanation of Output:**

- The loop starts with the character `'a'` and prints it. Then, `ch` is incremented by 4, so the next printed character will be `'e'`, then `'i'`, `'m'`, `'q'`, and `'u'`, and the loop will stop once `ch` exceeds `'z'`.
- **Output:**
  ```
  a e i m q u y
  ```

---

### **Note:**

1. **Character Arithmetic:**
   - In C++, characters can be manipulated using arithmetic operations (e.g., `ch += 4`), which advances the character by its ASCII value.
   
2. **Do-While Loop Behavior:**
   - The **do-while loop** ensures that the body of the loop executes at least once, even if the condition is false at the start. In this case, the condition is checked after the character is printed.

3. **Skipping Alphabets:**
   - By adding 4 to the value of `ch` in each iteration, the program effectively skips the next 3 letters of the alphabet and prints only the ones at every 4th position.

---