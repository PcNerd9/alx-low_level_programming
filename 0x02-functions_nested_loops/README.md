# 0x02 - Functions, Nested Loops

This repository contains exercises and projects that focus on functions and nested loops in C programming. Understanding these concepts is crucial for structuring code effectively and performing repetitive tasks.

## Table of Contents

- [Project Overview](#project-overview)
- [Functions](#functions)
- [Nested Loops](#nested-loops)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Understand the concept of functions and how to define and call them.
- Utilize nested loops to handle multi-dimensional data structures or repetitive tasks.

## Functions

Functions are blocks of code designed to perform specific tasks. They help to modularize code, making it easier to read and maintain. Here’s an example of a simple function in C:

```c
#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main(void) {
    int result = add(5, 3);
    printf("Result: %d\n", result);
    return 0;
}

