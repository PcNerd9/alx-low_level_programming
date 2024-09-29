# 0x1C - Makefiles

This repository contains exercises and projects focused on understanding and using Makefiles in C programming. Makefiles are a powerful tool for automating the build process of software projects, allowing for efficient compilation and management of source code.

## Table of Contents

- [Project Overview](#project-overview)
- [Makefiles](#makefiles)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Learn how to create and use Makefiles to automate the build process.
- Understand the structure and syntax of Makefiles.
- Use variables and targets effectively in Makefiles.

## Makefiles

This project includes several C source files and corresponding Makefiles:

- **0-Makefile**: A basic Makefile to compile a simple program.
- **1-Makefile**: An enhanced Makefile with variables and multiple targets.
- **2-Makefile**: A more complex Makefile that demonstrates the use of pattern rules.
- **main.c**: The main source file for the project.
- **school.c**: A source file demonstrating a simple program related to a school.
- **school.h**: The header file for the school program.
- **school.o**: The object file generated from `school.c`.

### Example

Here's an example of a basic Makefile:

```Makefile
CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
SRC = main.c school.c
OBJ = $(SRC:.c=.o)

all: school

school: $(OBJ)
	$(CC) $(OBJ) -o school

clean:
	rm -f $(OBJ) school

