# 0x08 - Recursion

This repository contains exercises and projects focused on recursion in C programming. Recursion is a powerful technique for solving problems by breaking them down into smaller subproblems.

## Table of Contents

- [Project Overview](#project-overview)
- [Recursion Functions](#recursion-functions)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Understand the concept of recursion and how it can be used to solve problems.
- Implement recursive functions for various tasks, such as string manipulation and mathematical calculations.

## Recursion Functions

This project includes several functions that demonstrate recursion:

- **0-puts_recursion.c**: A function that prints a string using recursion.
- **1-print_rev_recursion.c**: A function that prints a string in reverse using recursion.
- **2-strlen_recursion.c**: A function that returns the length of a string using recursion.
- **3-factorial.c**: A function that returns the factorial of a given number using recursion.
- **4-pow_recursion.c**: A function that returns the value of `x` raised to the power of `y` using recursion.
- **5-sqrt_recursion.c**: A function that returns the natural square root of a number using recursion.
- **6-is_prime_number.c**: A function that checks if a number is a prime number using recursion.
- **100-is_palindrome.c**: A function that checks if a string is a palindrome using recursion.
- **101-wildcmp.c**: A function that compares two strings with wildcard support.

### Example

Here is an example of how to calculate factorial using recursion:

```c
#include <stdio.h>

int factorial(int n) {
    if (n < 0) {
        return -1; // Factorial of negative numbers is undefined
    } else if (n == 0) {
        return 1; // Base case: 0! = 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main(void) {
    int num = 5;
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result); // Output: Factorial of 5 is 120
    return 0;
}

