### **Question:**
**Give an example of a situation where multiple conditions require a nested if-else statement.**

---

### **Answer:**
A nested if-else statement is useful when you need to evaluate multiple conditions in a hierarchical manner. For example, let's say we're developing a system that checks the eligibility of a person for a loan based on their age, income, and credit score. This scenario requires multiple conditions to be checked in sequence, and that's where nested if-else statements come in handy.

Here’s how you might implement that in C++:

---

### **Example Code:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 25;
    double income = 35000;
    int creditScore = 720;

    // Check eligibility for loan
    if (age >= 18) {
        if (income >= 30000) {
            if (creditScore >= 700) {
                cout << "You are eligible for a loan!" << endl;
            } else {
                cout << "You need a higher credit score for the loan." << endl;
            }
        } else {
            cout << "Your income is too low to qualify for a loan." << endl;
        }
    } else {
        cout << "You must be at least 18 years old to apply for a loan." << endl;
    }

    return 0;
}
```

---

### **Explanation:**

1. **First Condition**: We check if the person is at least 18 years old. This is a basic requirement for loan eligibility.
   
2. **Nested Condition 1**: If the person is 18 or older, we check if their income is above a certain threshold (in this case, $30,000). If the income is too low, they are ineligible.

3. **Nested Condition 2**: If both the age and income conditions are met, we then check the credit score. If the credit score is 700 or higher, the person qualifies for the loan. Otherwise, they are rejected due to a low credit score.

4. **Final Outcome**: Depending on the combination of age, income, and credit score, the program outputs whether the person qualifies for the loan or which condition they failed.

---
