### Apache task 2
# README

This README file explains the development environment and provides instructions on how to compile and run the three provided C codes. Additionally, it compares the advantages and disadvantages of each code approach in calculating the Fibonacci sequence.

## Development Environment

To compile and run the C codes, you need :

C Compiler: A C compiler must be installed on your system. The codes are written in C, so you need a compiler to translate them into machine-readable binary code.


## Compilation and Execution

Follow the steps below to compile and run each of the three C codes:

### recursion Code

1. Open a terminal or command prompt on your system.

2. Navigate to the directory where the C code file is located using the `cd` command. For example, if the code is saved on your desktop:

   ```bash
   cd ~/Desktop
   ```

3. Use a C compiler to compile the code. For example, using GCC:

   ```bash
   gcc -o recursion recursion.c
   ```

4. Run the executable:

   ```bash
   ./recursion
   ```

### iterative Code

1. Open a terminal or command prompt on your system.

2. Navigate to the directory where the C code file is located.

3. Use a C compiler to compile the code. For example, using GCC:

   ```bash
   gcc -o iterative iterative.c
   ```

4. Run the executable:

   ```bash
   ./iterative
   ```

### memoization Code

1. Open a terminal or command prompt on your system.

2. Navigate to the directory where the C code file is located.

3. Use a C compiler to compile the code. For example, using GCC:

   ```bash
   gcc -o memoization memoization.c
   ```

4. Run the executable:

   ```bash
   ./memoization
   ```

## Comparison

Now let's compare the advantages and disadvantages of each approach:

### Recursive Approach

**Advantages:**
- Simple and easy to understand.
- Represents the mathematical definition of the recurrence relation directly.

**Disadvantages:**
- Recursive approach may lead to redundant calculations and inefficiencies for large values of n.
- Exponential time complexity, leading to high computation time for larger n values.

### Iterative Approach

**Advantages:**
- Avoids redundant calculations and is more efficient compared to the recursive approach.
- Linear time complexity, making it suitable for larger values of n.

**Disadvantages:**
- Still not the most efficient approach, especially for extremely large values of n.
- Code might be slightly more complex compared to the recursive version.

### Recursive Approach with Memoization

**Advantages:**
- Combines the simplicity of the recursive approach with the efficiency of the iterative approach.
- Avoids redundant calculations by using memoization, making it significantly faster than both previous methods.
- Asymptotic time complexity is linear, which is very efficient for large values of n.

**Disadvantages:**
- Slightly more complex due to the additional use of the memoization array.

## Conclusion

The recursive approach is simple but inefficient for larger n values due to redundant calculations.
The iterative approach is more efficient than the recursive approach but may still be slow for extremely large values of n.
Memoization (top-down) approach offers the best performance, avoiding redundant calculations and providing linear time complexity for large n values.
Overall, the memoization approach is the recommended method as it strikes a good balance between simplicity and efficiency, making it suitable for a wide range of inputs.