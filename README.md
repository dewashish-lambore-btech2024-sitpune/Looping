# Experiment 6: Exploring and Implementing Looping Constructs in C++

---

## Aim

The primary goals of this experiment are:
1. To gain a comprehensive understanding of the different looping mechanisms available in C++.
2. To implement loops (`for`, `while`) while incorporating control flow modifiers such as `continue` and `exit(0)`.
3. To apply looping constructs to practical problems such as filtering even numbers, reversing digits of a number, and managing password authentication attempts.

---

## Tool Used

Visual Studio Code (VS Code)

---

## Objectives

- To familiarize with the syntax and working flow of `for` and `while` loops, including nested loops.
- To learn the use of control statements that influence loop execution, specifically `continue` for skipping iterations and `exit(0)` to terminate programs.
- To apply these loops to real-life programming scenarios, emphasizing logical problem solving.
- To appreciate how loops enable efficient repetition without redundant code.

---

## Theory

### Understanding Looping in C++

Looping is an essential programming concept that allows the repeated execution of a code block as long as a specified condition holds true. In C++, three main looping structures are available, each suited to different scenarios:

---

### For Loop

The `for` loop is optimal when the number of iterations is predetermined or known before entering the loop. It consists of three key parts: initialization, condition check, and update of the loop control variable. The loop body executes repeatedly while the condition remains true, making it particularly suited for iterating over ranges or collections where the count is fixed.

---

### While Loop

The `while` loop is used when the number of iterations depends on dynamic conditions evaluated during runtime. It continually executes its body as long as the condition is true. This is beneficial when the termination condition is not fixed and might change as the loop progresses.

---

### Do-While Loop (Mentioned for Completeness)

Though not part of this experiment, the `do-while` loop executes the loop body at least once before checking the condition, guaranteeing a minimum of one execution regardless of the condition's initial value.

---

### Control Statements within Loops

- **continue:** This statement causes the loop to immediately skip the current iteration and move on to the next one. It's helpful to avoid executing certain parts of the loop when specific conditions are met.
  
- **exit(0):** This command terminates the entire program immediately, bypassing any remaining code execution, often used to halt the program after successful completion or upon critical failure.

---

## Role of `<cstring>` Header

The `<cstring>` library in C++ offers functionalities to manipulate C-style strings (character arrays terminated by a null character). It provides operations such as copying, comparing, concatenating, and searching strings, which are crucial for handling raw character arrays effectively, especially in password validation where string comparison is necessary.

---

## Practical Applications of Loops Covered in the Experiment

1. Repeated execution of tasks, such as printing messages multiple times.
2. Performing selective filtering, demonstrated by printing only even numbers within a range.
3. Implementing validation mechanisms, such as limiting the number of password entry attempts and comparing entered passwords with stored ones.
4. Manipulating numeric data, like reversing the digits of a number through arithmetic operations.
5. Managing program flow using `continue` to selectively skip loop iterations and `exit(0)` for immediate program termination.

---

## Program Description

- **Even Numbers Filtering:**

  The program iterates through a predefined numeric range and prints only the even numbers. Odd numbers are skipped using the `continue` statement, demonstrating effective use of flow control within a loop.

- **Repeating a Message Multiple Times:**

  Demonstrates the advantage of loops by printing the same message multiple times without redundancy, showcasing how loops simplify repetitive tasks.

- **Password Validation with Limited Attempts:**

  The program prompts the user to input a password, compares it to a preset correct password, and allows up to five tries. The comparison relies on a function from the `<cstring>` library to check string equality. Upon entering the correct password, the program uses `exit(0)` to immediately terminate, reflecting how loops and conditional checks combine to manage authentication logic.

- **Reversing a Number:**

  By extracting digits one by one using arithmetic operations and reconstructing them in reverse order, the program illustrates how loops can be applied to numerical problem solving and digit manipulation.

---

## Concepts Highlighted

- Use of `for` and `while` loops to manage iteration.
- The significance of initializing, checking, and updating loop variables correctly.
- Control statements such as `continue` and `exit(0)` and their impact on loop execution.
- Utilizing `%` and `/` operators to process digits of a number.
- Using `strcmp()` from `<cstring>` for safe and effective string comparison.
- Handling user input and employing conditional logic inside loops to manage program behavior dynamically.

---

## Sample Output

1. **Filtering Even Numbers:**

The output displays all even numbers between 0 and 10, skipping the odd numbers seamlessly.

2. **Repeated Message:**

The specified message is printed five times in succession, highlighting the loop’s role in code brevity and clarity.

3. **Password Validation:**

The user is prompted multiple times until the correct password is entered or attempts are exhausted, demonstrating robust input validation and program flow control.

4. **Number Reversal:**

After entering a number, the reversed number is displayed, showing the successful manipulation of numerical data using loop constructs.

---

This experiment strengthens the understanding of how iterative constructs and control flow mechanisms in C++ work together to build efficient and logical programs. Mastery of these concepts lays a foundation for solving complex programming challenges involving repetition, validation, and conditional execution.

