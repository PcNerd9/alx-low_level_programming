# 0x05 - Pointers, Arrays, Strings

This repository contains exercises and projects that focus on pointers, arrays, and strings in C programming. These concepts are fundamental for efficient data manipulation and memory management in C.

## Table of Contents

- [Project Overview](#project-overview)
- [Pointers](#pointers)
- [Arrays](#arrays)
- [Strings](#strings)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Understand the concept of pointers and how they relate to arrays and strings.
- Learn how to manipulate data using pointers effectively.

## Pointers

Pointers are variables that store the memory address of another variable. This project includes various examples of pointer usage:

- **0-reset_to_98.c**: A function that takes a pointer to an integer and updates the value it points to 98.
- **1-swap.c**: A function that swaps the values of two integers using pointers.
- **2-strlen.c**: A function that returns the length of a string using pointers.

### Example

```c
#include <stdio.h>

void reset_to_98(int *n) {
    *n = 98;
}

int main(void) {
    int num = 1024;
    reset_to_98(&num);
    printf("num: %d\n", num); // Output: num: 98
    return 0;
}

