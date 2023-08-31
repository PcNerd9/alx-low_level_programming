# Bitwise Operators and Manipulation Practice

This repository is designed to help me grasp the concepts of bitwise operators and their manipulation in programming. Bitwise operators are fundamental tools that allow you to perform operations at the level of individual bits within binary representations of data.

## What are Bitwise Operators?

Bitwise operators are used to manipulate individual bits within integers. They work by performing operations at the binary level, allowing you to change, query, or modify specific bits within numbers. The common bitwise operators include:

- **AND (`&`):** Performs a logical AND operation on each pair of corresponding bits from two integers. The result has a bit set if both input bits are set.

- **OR (`|`):** Performs a logical OR operation on each pair of corresponding bits from two integers. The result has a bit set if either input bit is set.

- **XOR (`^`):** Performs a logical XOR (exclusive OR) operation on each pair of corresponding bits from two integers. The result has a bit set if the input bits are different.

- **NOT (`~`):** Inverts all the bits of a number, turning 0s into 1s and 1s into 0s.

- **Left Shift (`<<`):** Shifts the bits of a number to the left by a specified number of positions. This effectively multiplies the number by 2 raised to the power of the shift amount.

- **Right Shift (`>>`):** Shifts the bits of a number to the right by a specified number of positions. This effectively divides the number by 2 raised to the power of the shift amount.

## Implementation and Tasks

This repository, contains series of tasks designed to help me understand and practice bitwise manipulation. Each task is focused on a specific operation, guiding me through the implementation process. Here's a quick overview of the tasks:

### Task 0: Binary to Unsigned Int Conversion

- **File:** `0-binary_to_uint.c`
- **Function Prototype:** `unsigned int binary_to_uint(const char *b);`

Implement a function that converts a binary number represented as a string into an unsigned integer.

### Task 1: Printing Binary Representation

- **File:** `1-print_binary.c`
- **Function Prototype:** `void print_binary(unsigned long int n);`

Create a function that prints the binary representation of an unsigned long integer.

### Task 2: Getting a Bit's Value

- **File:** `2-get_bit.c`
- **Function Prototype:** `int get_bit(unsigned long int n, unsigned int index);`

Develop a function that retrieves the value of a bit at a specific index in an unsigned long integer.

### Task 3: Setting a Bit to 1

- **File:** `3-set_bit.c`
- **Function Prototype:** `int set_bit(unsigned int *n, unsigned int index);`

Write a function that sets the value of a bit to 1 at a given index in an unsigned integer.

### Task 4: Setting a Bit to 0

- **File:** `4-clear_bit.c`
- **Function Prototype:** `int clear_bit(unsigned long int *n, unsigned int index);`

Craft a function that sets the value of a bit to 0 at a specified index in an unsigned long integer.

## Getting Started

To get started with these tasks, follow these steps:

1. Clone this repository to your local machine using the following command:

