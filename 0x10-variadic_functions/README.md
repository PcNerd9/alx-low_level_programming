# 0x10 - Variadic Functions

This repository contains exercises and projects that focus on variadic functions in C programming. Variadic functions are functions that can accept a variable number of arguments, which provides greater flexibility in function calls.

## Table of Contents

- [Project Overview](#project-overview)
- [Variadic Functions](#variadic-functions)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Understand the concept of variadic functions and how to implement them.
- Learn to handle a variable number of parameters within functions.

## Variadic Functions

Variadic functions allow you to define functions that accept a variable number of arguments. This is useful for functions like `printf`, which can handle different types and numbers of parameters. This project includes several files that demonstrate the use of variadic functions:

- **0-sum_them_all.c**: A function that returns the sum of all its parameters.
- **1-print_numbers.c**: A function that prints numbers followed by a separator.
- **2-print_strings.c**: A function that prints strings followed by a separator.
- **3-print_all.c**: A function that prints various types of data (numbers, strings, etc.) based on format specifiers.
- **variadic_functions.h**: Header file that contains function prototypes and definitions for the variadic functions.

### Example

Here is an example of a variadic function to calculate the sum of integers:

```c
#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...) {
    va_list args;
    int sum = 0;

    va_start(args, n);
    for (unsigned int i = 0; i < n; i++) {
        sum += va_arg(args, int);
    }
    va_end(args);

    return sum;
}

int main() {
    printf("Sum: %d\n", sum_them_all(3, 10, 20, 30));  // Output: Sum: 60
    return 0;
}

