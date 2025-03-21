### **Algorithm to Find Numbers Divisible by Both 3 and 5 (From 1 to N)**

Here is an algorithm that will find all numbers between `1` and `N` that are divisible by both 3 and 5.

---

### **Algorithm**

1. **Start**
2. **Input**: Read the integer `N` (upper limit).
3. **Initialize**: Set `i = 1` (starting point).
4. **Loop**: For each `i` from `1` to `N`:
   - **Check**: If `i % 3 == 0` and `i % 5 == 0` (i.e., the number is divisible by both 3 and 5):
     - **Print**: Print the value of `i`.
5. **End**: Continue until `i` reaches `N`.

---

### **Flowchart**

Here’s a flowchart for the algorithm:

```
      +--------------------+
      |      Start          |
      +--------------------+
             |
             v
      +--------------------+
      | Input N (upper limit)|
      +--------------------+
             |
             v
      +--------------------+
      | i = 1              |
      +--------------------+
             |
             v
      +-------------------------+
      | i <= N ?                |
      +-------------------------+
        /     \
    Yes /       \ No
        /         \
+-------------------+     +----------------+
| i % 3 == 0 and    |     |   End Program  |
| i % 5 == 0 ?      |     +----------------+
+-------------------+
        |
     Yes /  \
         /    \
+-------------------+
| Print i           |
+-------------------+
         |
         v
+-------------------+
| i = i + 1         |
+-------------------+
         |
         v
      +-------------------------+
      | i <= N ?                |
      +-------------------------+
        /     \
    Yes /       \ No
        /         \
+-------------------+     +----------------+
| i % 3 == 0 and    |     |   End Program  |
| i % 5 == 0 ?      |     +----------------+
+-------------------+
        |
     Yes /  \
         /    \
+-------------------+
| Print i           |
+-------------------+
         |
         v
+-------------------+
| i = i + 1         |
+-------------------+
         |
         v
    (Repeat until i > N)
```

---

### **Explanation of Flowchart:**

1. **Start**: Begin the process.
2. **Input N**: You will input the value of `N`, the upper limit of the range.
3. **Set i = 1**: Start iterating from `i = 1` and check each number in the range.
4. **Loop through numbers**: Check if `i` is less than or equal to `N`. If yes, proceed to the next step. If no, the program ends.
5. **Divisibility check**: Check if `i` is divisible by both 3 and 5. If true, print `i`. If false, continue to the next step.
6. **Increment i**: After each iteration, increment `i` by 1.
7. **Repeat**: Repeat steps 4-6 until `i > N`.
8. **End**: The program finishes.

---

### **Example**

If `N = 30`, the numbers divisible by both 3 and 5 from 1 to 30 are:

**Output:**
```
15
30
```

These numbers are divisible by both 3 and 5.