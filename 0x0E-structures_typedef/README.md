# 0x0E - Structures and Typedef

This repository contains exercises and projects that focus on understanding structures and typedefs in C programming. Structures are essential for creating complex data types, allowing the grouping of different data types under a single name.

## Table of Contents

- [Project Overview](#project-overview)
- [Structures](#structures)
- [Typedef](#typedef)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Understand how to define and use structures in C.
- Learn how to use `typedef` to create new data types.
- Implement functions that operate on structures.

## Structures

A structure in C is a user-defined data type that allows the grouping of related variables of different types. This project includes several files that demonstrate the use of structures:

- **dog.h**: A header file that defines a `dog` structure.
- **1-init_dog.c**: A function that initializes a `dog` structure.
- **2-print_dog.c**: A function that prints the details of a `dog` structure.
- **4-new_dog.c**: A function that creates a new dog structure dynamically.
- **5-free_dog.c**: A function that frees the memory allocated for a `dog` structure.

### Example

Here is an example of defining and using a structure:

```c
#include <stdio.h>
#include "dog.h"

int main() {
    struct dog my_dog;

    my_dog.name = "Buddy";
    my_dog.age = 5.0;
    my_dog.owner = "Alice";

    printf("Dog's Name: %s\n", my_dog.name);
    printf("Dog's Age: %.1f\n", my_dog.age);
    printf("Dog's Owner: %s\n", my_dog.owner);
    
    return 0;
}

