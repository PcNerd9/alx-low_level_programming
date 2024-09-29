# 0x03 - Debugging

This repository contains exercises and projects related to debugging in C programming. The focus of these exercises is to practice identifying and fixing errors in code, as well as understanding how debugging tools can aid in the development process.

## Table of Contents

- [Project Overview](#project-overview)
- [Debugging Techniques](#debugging-techniques)
- [Common Errors](#common-errors)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Understand the concept of debugging and how to effectively find and fix errors in C code.
- Learn about common debugging tools and techniques.

## Debugging Techniques

Debugging is the process of identifying and removing errors from computer software or hardware. Here’s an example of a simple debugging technique using `printf` statements to trace program execution:

```c
#include <stdio.h>

// Function to demonstrate a simple bug fix
void print_numbers(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
}

int main(void) {
    print_numbers(5);
    return 0;
}

