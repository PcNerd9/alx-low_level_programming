# 0x14 - Bit Manipulation

This repository contains exercises and projects that focus on bit manipulation in C programming. Understanding bit manipulation is essential for low-level programming, optimizing performance, and working with binary data.

## Table of Contents

- [Project Overview](#project-overview)
- [Bit Manipulation](#bit-manipulation)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Understand the concept of bits and how to manipulate them.
- Implement functions that perform various bitwise operations.

## Bit Manipulation

Bit manipulation involves the direct manipulation of bits within binary representations. This project includes several files that demonstrate common bit manipulation tasks:

- **0-binary_to_uint.c**: A function that converts a binary number to an unsigned integer.
- **1-print_binary.c**: A function that prints the binary representation of a number.
- **2-get_bit.c**: A function that returns the value of a bit at a given index.
- **3-set_bit.c**: A function that sets the value of a bit to 1 at a given index.
- **4-clear_bit.c**: A function that sets the value of a bit to 0 at a given index.
- **5-flip_bits.c**: A function that returns the number of bits needed to flip to get from one number to another.
- **main.h**: Header file containing function prototypes.
- **main.c**: Main file to test the bit manipulation functions.

### Example

Here is an example of how to convert a binary string to an unsigned integer:

```c
#include <stdio.h>
#include "main.h"

// Function to convert binary string to unsigned int
unsigned int binary_to_uint(const char *b) {
    unsigned int result = 0;
    while (*b) {
        result = (result << 1) | (*b - '0');
        b++;
    }
    return result;
}

int main() {
    const char *binary = "1010";
    unsigned int decimal = binary_to_uint(binary);
    printf("Binary: %s, Unsigned Integer: %u\n", binary, decimal); // Output: Binary: 1010, Unsigned Integer: 10
    return 0;
}

