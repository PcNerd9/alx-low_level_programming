# 0x0A - Argc, Argv

This repository contains exercises and projects focused on command-line argument handling in C programming using `argc` and `argv`. Understanding how to work with command-line arguments is essential for developing flexible and user-friendly applications.

## Table of Contents

- [Project Overview](#project-overview)
- [Command-Line Arguments](#command-line-arguments)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Understand the purpose of `argc` (argument count) and `argv` (argument vector).
- Implement programs that utilize command-line arguments for various functionalities.

## Command-Line Arguments

This project includes several C programs demonstrating the use of command-line arguments:

- **0-whatsmyname.c**: A program that prints its name.
- **1-args.c**: A program that prints the number of arguments passed to it.
- **100-change.c**: A program that prints the minimum number of coins to make change for a given amount of money.
- **2-args.c**: A program that prints all the arguments it receives.
- **3-mul.c**: A program that multiplies two numbers passed as arguments.
- **4-add.c**: A program that adds two numbers passed as arguments.

### Example

Here is an example of how to use `argc` and `argv` in a simple program:

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Program name: %s\n", argv[0]);
    printf("Number of arguments: %d\n", argc - 1);
    return 0;
}

