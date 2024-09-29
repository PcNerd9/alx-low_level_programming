# 0x09 - Static Libraries

This repository contains exercises and projects focused on creating and using static libraries in C programming. Static libraries are archives of object files that are linked into the program during the linking phase of compilation.

## Table of Contents

- [Project Overview](#project-overview)
- [Static Libraries](#static-libraries)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Understand the concept of static libraries and their role in C programming.
- Learn how to create and use static libraries in your projects.

## Static Libraries

This project includes several important files:

- **liball.a**: A static library that contains various object files.
- **libmy.a**: Another static library that serves as an example.
- **create_static_lib.sh**: A shell script to create a static library from object files.
- **object_files/**: A directory containing compiled object files that can be included in the static library.
- **main.h**: A header file containing function prototypes for the static library.

### Example

Here is an example of how to create a static library using the provided shell script:

```bash
#!/bin/bash
gcc -c *.c           # Compile all .c files into .o files
ar rc liball.a *.o   # Create the static library from the object files
ranlib liball.a      # Generate an index to the contents of the archive

