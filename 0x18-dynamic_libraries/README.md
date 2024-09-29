# 0x18 - Dynamic Libraries

This repository contains exercises and projects focused on creating and using dynamic libraries in C programming. Dynamic libraries allow for efficient memory usage and modular programming by enabling code reuse across multiple programs.

## Table of Contents

- [Project Overview](#project-overview)
- [Dynamic Libraries](#dynamic-libraries)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Understand the concept of dynamic libraries.
- Create and use dynamic libraries in C programming.

## Dynamic Libraries

This project includes several C source files and their corresponding object files, as well as scripts for creating dynamic libraries. Below are the key files:

- **0-isupper.c**: A function that checks if a character is uppercase.
- **0-memset.c**: A function that fills memory with a constant byte.
- **0-strcat.c**: A function that concatenates two strings.
- **1-isdigit.c**: A function that checks if a character is a digit.
- **1-memcpy.c**: A function that copies memory area.
- **1-strncat.c**: A function that concatenates two strings up to n bytes.
- **100-atoi.c**: A function that converts a string to an integer.
- **2-strchr.c**: A function that locates a character in a string.
- **2-strlen.c**: A function that returns the length of a string.
- **3-islower.c**: A function that checks if a character is lowercase.
- **3-puts.c**: A function that prints a string.
- **4-isalpha.c**: A function that checks if a character is alphabetic.
- **4-strpbrk.c**: A function that locates the first occurrence of any character from a set in a string.
- **5-strstr.c**: A function that locates a substring.
- **6-abs.c**: A function that computes the absolute value of an integer.
- **9-strcpy.c**: A function that copies a string.
- **liball.so**: The dynamic library created from the source files.
- **1-create_dynamic_lib.sh**: A shell script to create the dynamic library.
- **main.c**: A test file to demonstrate the usage of the dynamic library.

### Example

Here’s an example of how to use a function from the dynamic library:

```c
#include "main.h"

int main(void) {
    char str[] = "Hello, World!";
    _puts(str);
    return 0;
}

