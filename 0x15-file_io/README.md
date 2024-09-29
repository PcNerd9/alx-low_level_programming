# 0x15 - File I/O

This repository contains exercises and projects that focus on file input and output operations in C programming. Understanding file I/O is essential for handling data storage, retrieval, and manipulation in applications.

## Table of Contents

- [Project Overview](#project-overview)
- [File I/O Operations](#file-io-operations)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Understand how to read from and write to files in C.
- Implement functions that perform various file I/O operations.

## File I/O Operations

This project includes several files that demonstrate common file I/O tasks:

- **0-read_textfile.c**: A function that reads a text file and prints it to the POSIX standard output.
- **1-create_file.c**: A function that creates a file and writes a string to it.
- **2-append_text_to_file.c**: A function that appends text to an existing file.
- **3-cp.c**: A program that copies the contents of one file to another.
- **100-elf_header.c**: A function that displays the information contained in the ELF header at the start of an ELF file.
- **main.h**: Header file containing function prototypes.
- **main.c**: Main file to test the file I/O functions.

### Example

Here is an example of how to read a text file and print its contents:

```c
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters) {
    char *buffer;
    ssize_t fd;
    ssize_t bytesRead;
    ssize_t bytesWritten;

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        return (0);
    }

    buffer = malloc(sizeof(char) * letters);
    bytesRead = read(fd, buffer, letters);
    bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

    free(buffer);
    close(fd);
    return (bytesWritten);
}

int main() {
    read_textfile("test.txt", 100);
    return (0);
}

