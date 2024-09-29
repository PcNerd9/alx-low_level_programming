# 0x0C - More Malloc, Free

This repository contains exercises and projects focused on advanced dynamic memory allocation in C programming. It builds upon the concepts introduced in the previous project, emphasizing the importance of proper memory management in software development.

## Table of Contents

- [Project Overview](#project-overview)
- [Advanced Dynamic Memory Allocation](#advanced-dynamic-memory-allocation)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Explore more complex scenarios of dynamic memory allocation.
- Understand how to efficiently manage memory for more advanced use cases.

## Advanced Dynamic Memory Allocation

This project includes several C programs that demonstrate advanced memory allocation techniques:

- **0-malloc_checked.c**: A function that allocates memory and checks if the allocation was successful.
- **1-string_nconcat.c**: A function that concatenates two strings with a specified number of bytes from the second string.
- **2-calloc.c**: A function that allocates memory for an array using `calloc` and initializes it to zero.
- **3-array_range.c**: A function that creates an array of integers within a specified range.
- **100-realloc.c**: A function that reallocates a memory block with a new size.
- **101-mul.c**: A program that multiplies two numbers passed as arguments.

### Example

Here is an example of using `calloc` to allocate memory for an array:

```c
#include <stdlib.h>
#include <stdio.h>

int main() {
    int *array;
    int size = 5;

    // Allocate memory for an array of 5 integers and initialize to 0
    array = (int *)calloc(size, sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Use the allocated memory
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]); // This will print 0 for all elements
    }

    // Free the allocated memory
    free(array);
    return 0;
}

