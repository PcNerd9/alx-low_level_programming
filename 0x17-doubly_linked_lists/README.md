# 0x17 - Doubly Linked Lists

This repository contains exercises and projects focused on implementing and managing doubly linked lists in C programming. Doubly linked lists are a type of data structure that allows traversal in both directions, making them versatile for various applications.

## Table of Contents

- [Project Overview](#project-overview)
- [Doubly Linked List Operations](#doubly-linked-list-operations)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Understand the structure and operations of doubly linked lists.
- Implement functions that perform various operations on doubly linked lists.

## Doubly Linked List Operations

This project includes several files that demonstrate common operations on doubly linked lists:

- **0-print_dlistint.c**: A function that prints all the elements of a doubly linked list.
- **1-dlistint_len.c**: A function that returns the number of elements in a doubly linked list.
- **2-add_dnodeint.c**: A function that adds a new node at the beginning of a doubly linked list.
- **3-add_dnodeint_end.c**: A function that adds a new node at the end of a doubly linked list.
- **4-free_dlistint.c**: A function that frees a doubly linked list.
- **5-get_dnodeint.c**: A function that returns the nth node of a doubly linked list.
- **6-sum_dlistint.c**: A function that returns the sum of all the data in a doubly linked list.
- **7-insert_dnodeint.c**: A function that inserts a new node at a given position.
- **8-delete_dnodeint.c**: A function that deletes a node at a specified index.
- **lists.h**: Header file containing the structure definition and function prototypes.
- **main.c**: Main file to test the doubly linked list functions.

### Example

Here is an example of how to print all elements in a doubly linked list:

```c
#include <stdio.h>
#include "lists.h"

void print_dlistint(const dlistint_t *h) {
    const dlistint_t *current = h;
    while (current) {
        printf("%d\n", current->n);
        current = current->next;
    }
}

