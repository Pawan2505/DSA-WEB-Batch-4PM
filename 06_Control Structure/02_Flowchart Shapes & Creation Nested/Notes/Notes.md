### **Lecture Notes:** Flowchart Shapes & Creation with Nested Flowcharts

---

#### **1. Introduction to Flowcharts and Their Importance**

- **What is a Flowchart?**
  - A flowchart is a graphical representation of an algorithm or process.
  - It uses various shapes to represent different steps in the process (e.g., processes, decisions, inputs/outputs).
  
- **Why Flowcharts?**
  - Flowcharts help visualize the logic of a program before implementing it.
  - They are particularly useful in understanding and debugging algorithms.

---

#### **2. Flowchart Symbols and Shapes**

- **Common Flowchart Symbols:**
  - **Oval (Terminator)**: Used to represent the start and end points of a process.
    - **Example**: `Start` and `End`.
    - Shape: Oval.
  - **Rectangle (Process)**: Represents a process or action (e.g., calculation, assignment).
    - **Example**: `x = 5 + 10`.
    - Shape: Rectangle.
  - **Diamond (Decision)**: Represents a decision or condition. Used for `if` statements or branches.
    - **Example**: `Is x > 5?`.
    - Shape: Diamond.
  - **Parallelogram (Input/Output)**: Represents input from the user or output to the user.
    - **Example**: `Display result`.
    - Shape: Parallelogram.
  - **Arrow (Flowline)**: Represents the flow of control between steps.
    - Shape: Arrow.
  - **Circle (Connector)**: Used to connect flowchart segments, especially when flowcharts are large and split into multiple pages or sections.
    - Shape: Circle.

- **Flowchart Example:**
  - A simple flowchart for a program that checks if a number is positive or negative:
    ```
    [Start] → [Input number] → [Is number > 0?]
                     → (Yes) → [Display Positive] → [End]
                     → (No)  → [Display Negative] → [End]
    ```

---

#### **3. Creating Flowcharts for Simple Programs**

- **Basic Flowchart Example:**
  - **Problem**: Find the sum of two numbers.
    1. **Start**.
    2. **Input** two numbers (`a` and `b`).
    3. **Process**: Add the numbers (`sum = a + b`).
    4. **Output**: Display the result (`sum`).
    5. **End**.

  - **Flowchart:**
    ```
    [Start] → [Input a, b] → [sum = a + b] → [Display sum] → [End]
    ```

---

#### **4. Introduction to Nested Flowcharts**

- **What Are Nested Flowcharts?**
  - Nested flowcharts are flowcharts within flowcharts. They are used to represent complex decision-making processes or loops within larger algorithms.
  - **Example of Nested Flowchart**: A program that calculates whether a number is prime.
    1. **Start**.
    2. **Input** number (`n`).
    3. **Check if n <= 1** (First decision).
      - If `Yes`: **Display Not Prime**, then **End**.
      - If `No`: **Start loop** (Check divisibility from 2 to n-1).
        - **Is n divisible by i?** (Nested decision)
          - If `Yes`: **Display Not Prime** and **End**.
          - If `No`: Continue checking with the next `i`.
    4. After the loop finishes, **Display Prime** and **End**.

  - **Flowchart Representation:**
    ```
    [Start] → [Input n] → [Is n <= 1?] → (Yes) → [Display Not Prime] → [End]
                                  ↓
                             (No)
                                  ↓
                         [Start Loop] → [Is n % i == 0?]
                                  ↓                    ↓
                             (Yes)              (No)
                                  ↓                    ↓
                     [Display Not Prime] → Continue loop → [Display Prime] → [End]
    ```

- **Nested Flowchart Example:**
  - A program with nested loops or decision blocks (like calculating prime numbers) can be represented as:
    1. Main decision process (first level).
    2. A nested decision or loop inside the first level.
  
---

#### **5. Best Practices for Designing Flowcharts**

- **Keep It Simple:**
  - Avoid overcomplicating flowcharts. Break down complex processes into smaller, more manageable steps.
  - Use sub-processes for repetitive tasks.

- **Use Clear Labels:**
  - Every shape should be labeled with a clear description of the action or decision.

- **Avoid Over-Nesting:**
  - Try to avoid excessive nesting of decision blocks as it can make flowcharts difficult to follow. Break large flowcharts into multiple segments.

- **Use Connectors for Large Flowcharts:**
  - For larger flowcharts, use connectors (circle shapes) to make the flowchart manageable and to avoid crossing lines.

- **Maintain Consistency:**
  - Use consistent shapes and naming conventions for easier understanding.

---

#### **6. Case Study and Practical Examples**

- **Example 1: Calculate Factorial Using Nested Flowchart**
  - Problem: Write a program that calculates the factorial of a number using a loop.
  - Flowchart:
    ```
    [Start] → [Input n] → [Is n <= 0?] → (Yes) → [Display 1] → [End]
                               ↓
                          (No)
                               ↓
                      [Initialize fact = 1]
                               ↓
                      [For i = 1 to n] → [fact = fact * i] → [End loop]
                               ↓
                      [Display fact] → [End]
    ```

- **Example 2: Sorting an Array (Nested Loops)**
  - Problem: Write a program to sort an array using bubble sort.
  - Flowchart:
    ```
    [Start] → [Input array] → [Outer loop: i = 0 to n-1]
                                ↓
                      [Inner loop: j = 0 to n-i-1] → [Is arr[j] > arr[j+1]?]
                                ↓                    ↓
                            (Yes)              (No)
                                ↓                    ↓
                     [Swap arr[j] and arr[j+1]]  Continue inner loop
                                ↓
                    Continue outer loop → [Display sorted array] → [End]
    ```

---
