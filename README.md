# Erendira Miranda Homework 1

## Section I: Review Questions

### 1a) What is the difference between a compiler and an interpreter?

A compiler translates the entire program into machine code before it executes, while an interpreter translates and executes the program one statement at a time.

### 1b) What is the output of a C program's `main()` function by default?

If the `main()` function reaches the end without a return statement, it automatically returns `0`. This usually indicates that the program completed successfully.

### 2) What are header files in C and what is the purpose of the `#include` directive?

Header files in C contain declarations, functions prototypes, constants, and macros thatcan be used by a program. The `#include` directives adds the contents of a header file t othe C program before compliaton.

### 3) Explain how to declare and define a function in C. What is the purpose of the `return` statement in a function? Can a function have more than one `return` statement?

A function declaration tells the compiler the function's name, return type and parameters. A function contains the actual code that performs the functions type. The return statement sends a value back to the function. A function can have more than one but only one will execute.

### 4) What is type casting? Provide an example C function that demonstrates explicit type casting from `double` to `int`. The function should accept two arguments that are both `double` and return their sum as an integer.

Type casting is when you convert the value of one data type to another.
Ex:
int typeCasting(double num1, double num2)
{
    retun int(num1) + int(num2);
}

### 5) Explain the difference between local and global variables. Provide an example of each.

The differnect between a local and global variales is a local variable is declared inside a function or block and can only be used there. A global variable is declared outside all functions and can be accessed by multiple functions.
Ex:
int global_var = 0; //Global variable

void ex_func(void)
{
    int local_var = 5; //Local variable
}

### 6) How are strings declared and initialized in C? What is the role of the null terminator `'\0'`?

char string[] = "strings"
The null terminator marks the end of the string so functions now where the string ends.

### 7) What is a pointer in C? How do you pass a pointer to a function? What advantages are there to passing a pointer instead of a value?

A pointer is a variable that stores the memory address of another variable. You can use the address of operator & to pass a pointer to a function. The advantages of passing a pointer is that it allows the function to modify the original variable.

### 8) What do the `*` and `&` operators do in the context of pointers?

`*` operator accesses or derefrences the value stored at a memory address. `&` operator gets the memory address of a variable.

### 9) What is the difference between `while` and `do...while` loops?

A while loop checks the condition before running and a do while loop runs the code once before checking the condition.

### 10) What does the `break` statement do? How is it different from the `continue` statement?

A break statement immediately exits a loop. It is differenct from a continue statement becaus the continue statement skips the rest of the current iteration and moves to the next iteration.

### 11) Explain the use of bitwise operators, including `&`, `|`, `^`, `~`, `<<`, and `>>`, in C. Which bitwise operators can be used to set, clear, toggle, or check a specific bit in an integer variable?

&(AND): is used to check or clear bits 
|(OR): is used to set bits
^(XOR): is used to toggle bits
~(NOT): is used to invert
<<(left shift): is used to move bits to the left
>>(right shift): is used to move bits to the right

### 12) What is the purpose of the `PxSEL0` and `PxSEL1` GPIO registers? Write two statements that select the GPIO function for pins P1.0 and P1.7.

The purpose of these registers is to select the function of each pin.
P1SEL0 &= ~0x81;
P1SEL1 &= ~0x81;

### 13) Write a void function named `P1_1_and_P1_4_Init` that configures P1.1 and P1.4 as GPIO inputs with pull-up resistors enabled.

void P1_1_and_P1_4_Init(void)
{
    P1SEL0 &= ~0x12;
    P1SEL1 &= ~0x12;
    P1DIR  &= ~0x12;
    P1REN  |= 0x12;
    P1OUT  |= 0x12;
}

### 14) Write a void function named `Buttons_Init` that configures the following pins as GPIO inputs with pull-down resistors enabled:

- P3.1
- P3.6
- P5.0
- P5.4

void Buttons_Init(void)
{
    P3SEL0 &= ~0x42;
    P3SEL1 &= ~0x42;
    P3DIR &= ~0x42;
    P3REN |= 0x42;
    P3OUT &= ~0x42; 
    
    P5SEL0 &= ~0x11;
    P5SEL1 &= ~0x11;
    P5DIR &= ~0x11;
    P5REN |= 0x11;
    P35OUT &= ~0x11;
}

### 15) Write a void function named `LEDs_Init` that configures pins P7.0 through P7.7 as GPIO outputs and initializes the pins to zero.

void LEDs_Init(void)
{
    P7SEL0 &= ~0xFF;
    P7SEL1 &= ~0xFF;
    P7DIR |= 0xFF;
    P7OUT &= ~0xFF;
}

## Section II: Programming Assignments

### Integer Sign and Magnitude

Source file: `sign_and_magnitude.c`

This program determines whether an integer is positive, negative, or zero and displays its absolute value
### Bit Counter

Source file: `bit_counter.c`

This program determines how many bits are in the integer that the user enters.    

### Fibonacci

Source file: `fibonacci.c`

This program does the fibonacci sequence based on the input users number.