# 0x06 - More Pointers, Arrays, Strings

This repository contains exercises and projects that further explore pointers, arrays, and strings in C programming. These concepts are crucial for effective data manipulation and understanding memory management.

## Table of Contents

- [Project Overview](#project-overview)
- [String Manipulation Functions](#string-manipulation-functions)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Enhance the understanding of string manipulation functions.
- Learn to implement functions that perform various operations on strings and arrays.

## String Manipulation Functions

This project includes a variety of string manipulation functions, demonstrating the use of pointers and arrays:

- **0-strcat.c**: A function that concatenates two strings.
- **1-strncat.c**: A function that concatenates two strings, using at most `n` bytes from `src`.
- **2-strncpy.c**: A function that copies a string, using at most `n` bytes.
- **3-strcmp.c**: A function that compares two strings.
- **4-rev_array.c**: A function that reverses the content of an array of integers.
- **5-string_toupper.c**: A function that changes all lowercase letters of a string to uppercase.
- **6-cap_string.c**: A function that capitalizes all words in a string.
- **7-leet.c**: A function that encodes a string into 1337 (leet) speak.
- **100-rot13.c**: A function that encodes a string using ROT13 encryption.
- **101-print_number.c**: A function that prints an integer without using `printf`.
- **102-magic.c**: A function that manipulates an array to demonstrate pointer magic.
- **103-infinite_add.c**: A function that adds two numbers represented as strings and returns the sum as a string.
- **104-print_buffer.c**: A function that prints a buffer in a formatted way.

### Example

Here is an example of how to concatenate two strings:

```c
#include <stdio.h>
#include <string.h>

char *strcat(char *dest, const char *src) {
    char *ptr = dest + strlen(dest);
    while (*src) {
        *ptr++ = *src++;
    }
    *ptr = '\0';
    return dest;
}

int main(void) {
    char dest[20] = "Hello, ";
    char *src = "World!";
    strcat(dest, src);
    printf("%s\n", dest); // Output: Hello, World!
    return 0;
}

