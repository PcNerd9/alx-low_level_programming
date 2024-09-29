# 0x0D - Preprocessor

This repository contains exercises and projects focused on the C preprocessor. The preprocessor is a crucial part of the C compilation process, enabling the inclusion of files, macros, and conditional compilation.

## Table of Contents

- [Project Overview](#project-overview)
- [Preprocessor Directives](#preprocessor-directives)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Understand the role of the C preprocessor in the compilation process.
- Learn how to create and use macros.
- Explore the use of header files in C programming.

## Preprocessor Directives

This project includes several files that demonstrate the use of preprocessor directives:

- **0-object_like_macro.h**: A header file that defines a macro named `SIZE`.
- **1-pi.h**: A header file that defines a macro named `PI`.
- **2-main.c**: A C program that utilizes the defined macros.
- **3-function_like_macro.h**: A header file that defines a function-like macro for computing the absolute value of a number.
- **4-sum.h**: A header file that defines a macro to compute the sum of two numbers.

### Example

Here is an example of using a macro to compute the absolute value of a number:

```c
#include <stdio.h>
#include "3-function_like_macro.h"

int main() {
    int x = -10;
    int abs_value = ABS(x);
    printf("The absolute value of %d is %d\n", x, abs_value);
    return 0;
}

