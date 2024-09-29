# 0x01 - Variables, If, Else, While

This repository contains exercises and projects that focus on basic programming concepts in C, including variables, conditional statements, and loops. The aim is to build foundational knowledge essential for programming in C.

## Table of Contents

- [Project Overview](#project-overview)
- [Variables](#variables)
- [Conditional Statements](#conditional-statements)
- [Loops](#loops)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Understand and utilize variables in C.
- Implement conditional statements (`if`, `else if`, `else`).
- Utilize loops (`while` and `for`) for iteration.

## Variables

In C, variables are used to store data. They must be declared with a specific type, such as `int`, `float`, or `char`. Here’s an example of variable declaration and initialization:

```c
#include <stdio.h>

int main(void) {
    int age = 21;
    printf("Age: %d\n", age);
    return 0;
}

