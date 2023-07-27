### Apache task 1

 # README

This README file provides information about the development environment and instructions on how to compile and run the given C code. The provided C code defines arithmetic operations and demonstrates their usage.

## Development Environment

To compile and run the code, you need :

C Compiler: A C compiler must be installed on your system. The code provided is written in C, so you need a compiler to translate it into machine-readable binary code.


## Compilation and Execution

Follow the steps below to compile and run the given C code:

### Compilation

1. Open a terminal or command prompt on your system.

2. Navigate to the directory where the C code file is located using the `cd` command. For example, if the code is saved in the "src" folder on your desktop:

   ```bash
   cd ~/Desktop/src
   ```

3. Use a C compiler to compile the code. The most common C compiler is GCC (GNU Compiler Collection). To compile the code with GCC, use the following command:

   ```bash
   gcc -o main main.c
   ```

   This command will generate an executable file named "main" in the same directory.

### Execution

Once you have successfully compiled the code, follow these steps to execute it:

1. In the same terminal or command prompt, run the generated executable:

   ```bash
   ./main
   ```

2. After running the executable, the program will perform various arithmetic operations and display the results on the screen.

3. The output will show the result of each arithmetic operation (addition, multiplication, subtraction, division, and Fibonacci) with their respective values.

4. The program will also handle some error cases, such as division by zero.

5. After displaying the results, the program will free the memory allocated during execution and terminate.

## Important Note

It's essential to ensure that you have a compatible C compiler installed on your system and that you are running the code in a suitable environment. If you encounter any compilation or execution issues, make sure to review your development environment and configurations.

Now you have successfully compiled and run the provided C code demonstrating arithmetic operations. Feel free to explore the code and experiment with different arithmetic operations or even add new ones if you wish! Happy coding!
