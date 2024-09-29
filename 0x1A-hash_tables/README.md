# 0x1A - Hash Tables

This repository contains exercises and projects focused on implementing hash tables in C programming. Hash tables are data structures that provide efficient data retrieval and storage, making them essential in various applications.

## Table of Contents

- [Project Overview](#project-overview)
- [Hash Tables](#hash-tables)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Understand the principles of hash tables and their operations.
- Implement a hash table in C and perform various operations on it.

## Hash Tables

This project includes several C source files that implement the functionalities of a hash table:

- **0-hash_table_create.c**: A function that creates a hash table.
- **1-djb2.c**: The DJB2 hash function for generating hash values.
- **100-sorted_hash_table.c**: Functions for creating a sorted hash table.
- **2-key_index.c**: A function that computes the index of a key.
- **3-hash_table_set.c**: A function that adds an element to the hash table.
- **4-hash_table_get.c**: A function that retrieves a value associated with a key.
- **5-hash_table_print.c**: A function that prints the hash table.
- **6-hash_table_delete.c**: A function that deletes the hash table.
- **hash_tables.h**: The header file containing function prototypes and structure definitions.
- **main.c**: A test file to demonstrate the usage of the hash table.
- **sorted_linkedlist.c**: Functions for handling sorted linked lists.

### Example

Here’s an example of how to use the hash table functions:

```c
#include "hash_tables.h"

int main(void) {
    hash_table_t *ht = hash_table_create(1024);
    hash_table_set(ht, "key", "value");
    char *value = hash_table_get(ht, "key");
    printf("%s\n", value); // Output: value
    hash_table_print(ht);
    hash_table_delete(ht);
    return 0;
}

