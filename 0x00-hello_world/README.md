# 0x00 - Hello, World!

This repository contains introductory exercises and projects focusing on the basics of the C programming language, specifically emphasizing the "Hello, World!" program and fundamental concepts of compilation, syntax, and the use of the C preprocessor.

## Table of Contents

- [Project Overview](#project-overview)
- [Compilation Process](#compilation-process)
- [Hello, World! Program](#hello-world-program)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The primary goal of this project is to familiarize yourself with the following concepts:

- Basic syntax of C programming.
- The compilation process of C programs.
- Use of the `printf` function for output.
- Understanding of the C programming environment.

## Compilation Process

C programs are compiled using the GNU Compiler Collection (GCC). The basic steps include:

1. **Preprocessing**: Handling preprocessor directives (e.g., `#include`).
2. **Compilation**: Converting the code to assembly language.
3. **Assembly**: Transforming assembly code into machine code.
4. **Linking**: Combining machine code with libraries to create an executable.

## Hello, World! Program

The quintessential "Hello, World!" program demonstrates the basic syntax of C. Below is the code for this program:

```c
#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    return 0;
}

