## 📘 **Loop in C++ Programming**

---

### 🔶 What is a Loop?

A **loop** in C++ is used to **repeat a block of code** multiple times until a certain condition is met.

> **Why use loops?**  
To **avoid writing code again and again**. Loops make code **shorter, cleaner, and more efficient**.

---

### 🔷 Types of Loops in C++

| Loop Type     | Entry/Exit Controlled | Condition Checked |
|---------------|------------------------|-------------------|
| `for` loop     | Entry controlled       | Before loop starts |
| `while` loop   | Entry controlled       | Before loop starts |
| `do-while` loop| Exit controlled        | After loop ends once |

---

## 🔹 1. `for` loop

✅ **Use when you know how many times to repeat.**

### 📌 Syntax:
```cpp
for (initialization; condition; update) {
    // code block
}
```

### 🧪 Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
}
```

🖨️ Output:
```
1 2 3 4 5
```

---

## 🔹 2. `while` loop

✅ **Use when you don’t know exact number of repetitions but have a condition.**

### 📌 Syntax:
```cpp
while (condition) {
    // code block
}
```

### 🧪 Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
}
```

🖨️ Output:
```
1 2 3 4 5
```

---

## 🔹 3. `do-while` loop

✅ **Runs at least once even if the condition is false.**

### 📌 Syntax:
```cpp
do {
    // code block
} while (condition);
```

### 🧪 Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= 5);
}
```

🖨️ Output:
```
1 2 3 4 5
```

---

### 🔹 Special Statements in Loop

#### 👉 `break`:
Used to **exit loop early**.

#### 👉 `continue`:
Skips the current iteration and jumps to the **next loop cycle**.

### 📌 Example using `break`:
```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) break;
    cout << i << " ";
}
```
🖨️ Output: `1 2`

### 📌 Example using `continue`:
```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) continue;
    cout << i << " ";
}
```
🖨️ Output: `1 2 4 5`

---

### 🔷 Loop Dry Run Example

#### For `i = 1 to 3`
```cpp
for(int i=1; i<=3; i++){
    cout << "Hello\n";
}
```

👉 Output:
```
Hello
Hello
Hello
```

---

### 🔸 Practical Examples

#### ⭐ Sum of first 10 natural numbers:
```cpp
int sum = 0;
for(int i=1; i<=10; i++){
    sum += i;
}
cout << "Sum: " << sum;
```

#### ⭐ Print even numbers from 1 to 10:
```cpp
for(int i=2; i<=10; i+=2){
    cout << i << " ";
}
```

---

### 🔚 Note:

| Feature          | `for`        | `while`       | `do-while`       |
|------------------|--------------|----------------|------------------|
| Syntax length    | Short & clean| Slightly longer| Slightly longer |
| Runs at least once? | ❌ No     | ❌ No         | ✅ Yes           |
| Best for         | Known counts | Unknown count | At least one-time execution |
