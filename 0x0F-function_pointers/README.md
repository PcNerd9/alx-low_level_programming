# 0x0F - Function Pointers

This repository contains exercises and projects that focus on function pointers in C programming. Function pointers are a powerful feature that allows you to store the address of a function and use it to call that function dynamically.

## Table of Contents

- [Project Overview](#project-overview)
- [Function Pointers](#function-pointers)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Understand the concept of function pointers and their applications.
- Implement functions that utilize function pointers for various tasks.

## Function Pointers

Function pointers are variables that store the address of a function. This allows you to call functions dynamically at runtime. This project includes several files that demonstrate the use of function pointers:

- **0-print_name.c**: A function that prints a name using a function pointer.
- **1-array_iterator.c**: A function that executes a function given as a parameter on each element of an array.
- **2-int_index.c**: A function that searches for an integer in an array using a comparison function.
- **3-calc.h**: A header file that defines structures for arithmetic operations.
- **3-get_op_func.c**: A function that selects the correct operation function.
- **3-main.c**: The main program that demonstrates the use of the calculator functions.
- **3-op_functions.c**: Implementation of various arithmetic operations.

### Example

Here is an example of using a function pointer:

```c
#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

int main() {
    void (*func_ptr)() = greet;  // Declare a function pointer
    func_ptr();                  // Call the function using the pointer
    return 0;
}

