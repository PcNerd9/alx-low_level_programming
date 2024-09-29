# 0x07 - Even More Pointers, Arrays, Strings

This repository contains exercises and projects that delve deeper into pointers, arrays, and strings in C programming. The focus is on memory manipulation and string processing techniques.

## Table of Contents

- [Project Overview](#project-overview)
- [Memory Functions](#memory-functions)
- [String Functions](#string-functions)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Understand and implement various memory manipulation functions.
- Learn how to work with strings in more complex ways, including searching and analyzing string data.

## Memory Functions

This project includes several functions that manipulate memory:

- **0-memset.c**: A function that fills memory with a constant byte.
- **1-memcpy.c**: A function that copies memory area from one location to another.
- **100-set_string.c**: A function that sets the value of a pointer to a char.
- **2-strchr.c**: A function that locates a character in a string.
- **3-strspn.c**: A function that gets the length of a prefix substring.
- **4-strpbrk.c**: A function that searches a string for any of a set of bytes.
- **5-strstr.c**: A function that locates a substring in a string.

### Example

Here is an example of how to copy memory using `memcpy`:

```c
#include <stdio.h>
#include <string.h>

void *memcpy(void *dest, const void *src, size_t n) {
    char *d = dest;
    const char *s = src;
    while (n--) {
        *d++ = *s++;
    }
    return dest;
}

int main(void) {
    char src[] = "Hello, World!";
    char dest[20];
    memcpy(dest, src, strlen(src) + 1);
    printf("%s\n", dest); // Output: Hello, World!
    return 0;
}

