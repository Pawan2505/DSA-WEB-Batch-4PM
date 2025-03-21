### **Algorithm to Display the First N Odd Numbers and Their Sum**

This algorithm calculates and displays the first `N` odd numbers and their sum.

---

### **Algorithm**

1. **Start**
2. **Input**: Read the integer `N` (the number of odd numbers to display).
3. **Initialize**: Set `sum = 0` and `count = 1` (to keep track of the current odd number).
4. **Loop**: Repeat the following for `N` times:
   - Display the current odd number `count`.
   - Add the current odd number to `sum`: `sum = sum + count`.
   - Move to the next odd number by incrementing `count` by 2.
5. **Output**: After the loop ends, display the total sum of the odd numbers.
6. **End**

---

### **Example**

#### **Input**: `N = 5`

#### **Output**:
```
Odd numbers: 1, 3, 5, 7, 9
Sum: 25
```

### **Explanation**:
- The first 5 odd numbers are `1, 3, 5, 7, 9`.
- Their sum is `1 + 3 + 5 + 7 + 9 = 25`.

---

### **Example for N = 3**

#### **Input**: `N = 3`

#### **Output**:
```
Odd numbers: 1, 3, 5
Sum: 9
```

---

### **Code Implementation**

Here is a simple C++ implementation of the algorithm:

```cpp
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of terms: ";
    cin >> N;

    int sum = 0;
    int count = 1; // First odd number

    cout << "Odd numbers: ";
    for (int i = 1; i <= N; i++) {
        cout << count; // Display the current odd number
        sum += count;  // Add the current odd number to the sum

        if (i < N) {
            cout << ", ";  // Print a comma between numbers
        }
        
        count += 2;  // Move to the next odd number
    }

    cout << endl; // Newline
    cout << "Sum: " << sum << endl;  // Output the sum of odd numbers

    return 0;
}
```

### **Output Example for N = 5**
```
Enter the number of terms: 5
Odd numbers: 1, 3, 5, 7, 9
Sum: 25
```

---

### **Flowchart for the Algorithm**

Here’s a simple description of the flowchart:

```
      +----------------------+
      |       Start           |
      +----------------------+
               |
               v
      +----------------------+
      | Input N (number of terms) |
      +----------------------+
               |
               v
      +-----------------------------+
      | Initialize sum = 0, count = 1 |
      +-----------------------------+
               |
               v
      +-----------------------------+
      | i = 1 to N ?                |
      +-----------------------------+
         /         \
      Yes /           \ No
         /             \
+---------------------+  +----------------------+
| Display count       |  | End                  |
| Add count to sum    |  +----------------------+
| Increment count by 2|
+---------------------+
         |
         v
+-----------------------------+
| Repeat for next i           |
+-----------------------------+
         |
         v
+-----------------------------+
| Display sum                 |
+-----------------------------+
         |
         v
      +----------------------+
      | End                  |
      +----------------------+
```

---

### **Explanation of Flowchart**

1. **Start**: Begin the program.
2. **Input N**: Take the input value `N` (the number of odd numbers to display).
3. **Initialize sum and count**: Set `sum = 0` and `count = 1` (the first odd number).
4. **Loop**: Iterate `N` times:
   - In each iteration, display the current odd number (`count`), add it to the `sum`, and increment `count` by 2 to get the next odd number.
5. **Display sum**: After completing the loop, output the sum of the odd numbers.
6. **End**: End the program.

---
