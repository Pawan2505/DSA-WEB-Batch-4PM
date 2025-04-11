## 🔷 **Array in C++ Programming**

### ✅ **What is an Array?**

An **array** is a **collection of variables** of the same type stored in **contiguous memory locations**. It is used to **store multiple values** in a single variable.

### 🧠 **Why use Arrays?**

Without arrays:
```cpp
int a1 = 10;
int a2 = 20;
int a3 = 30;
```

With arrays:
```cpp
int arr[3] = {10, 20, 30};
```

Arrays help in:
- Managing multiple values of the same type.
- Using loops for processing.
- Reducing the number of variables.

---

### 📌 **Types of Arrays**
1. **One-Dimensional Array**
2. **Two-Dimensional Array (Matrix)**
3. **Multi-Dimensional Array** *(less common for beginners)*

---

### 🧾 **1. One-Dimensional Array**

#### ✅ Declaration:
```cpp
int arr[5]; // Declares an array of size 5
```

#### ✅ Initialization:
```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

#### ✅ Accessing Elements:
```cpp
cout << arr[0]; // prints 10
```

#### ✅ Loop Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i++) {
        cout << "Element at index " << i << " = " << arr[i] << endl;
    }
}
```

---

### 🧾 **2. Two-Dimensional Array (Matrix)**

#### ✅ Declaration:
```cpp
int arr[2][3]; // 2 rows, 3 columns
```

#### ✅ Initialization:
```cpp
int arr[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

#### ✅ Accessing Elements:
```cpp
cout << arr[1][2]; // prints 6
```

#### ✅ Loop Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
```

---

### 💡 **Note:**
- Array index starts from 0.
- Arrays are stored in **contiguous memory**.
- Array size must be a constant (in older standards).
- C++ doesn’t check array bounds at runtime.

---

### ✅ Important Array Programs
1. Find max/min in array
2. Calculate sum/average
3. Update an element
4. Delete an element (manual shifting)
5. 2D matrix input/output
