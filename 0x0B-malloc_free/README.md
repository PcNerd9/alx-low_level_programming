# 0x0B - Malloc, Free

This repository contains exercises and projects focused on dynamic memory allocation and deallocation in C programming using `malloc` and `free`. Understanding how to manage memory effectively is crucial for developing efficient and robust applications.

## Table of Contents

- [Project Overview](#project-overview)
- [Dynamic Memory Allocation](#dynamic-memory-allocation)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Understand the principles of dynamic memory allocation in C.
- Learn how to use `malloc`, `calloc`, `realloc`, and `free` to manage memory.

## Dynamic Memory Allocation

This project includes several C programs that demonstrate dynamic memory allocation:

- **0-create_array.c**: A function that creates an array of characters and initializes it with a specific string.
- **1-strdup.c**: A function that duplicates a string using dynamic memory allocation.
- **2-str_concat.c**: A function that concatenates two strings into a newly allocated space.
- **3-alloc_grid.c**: A function that returns a pointer to a 2-dimensional array of integers.
- **4-free_grid.c**: A function that frees a 2-dimensional grid previously created by `alloc_grid`.
- **100-argstostr.c**: A function that concatenates all arguments passed to the program into a single string.
- **101-strtow.c**: A function that splits a string into words.

### Example

Here is an example of using `malloc` to allocate memory for an array:

```c
#include <stdlib.h>
#include <stdio.h>

int main() {
    int *array;
    int size = 10;

    // Allocate memory for an array of 10 integers
    array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Use the allocated memory
    for (int i = 0; i < size; i++) {
        array[i] = i * 2;
        printf("%d ", array[i]);
    }

    // Free the allocated memory
    free(array);
    return 0;
}

