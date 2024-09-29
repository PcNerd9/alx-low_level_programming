# 0x12 - Singly Linked Lists

This repository contains exercises and projects that focus on singly linked lists in C programming. Understanding linked lists is essential for managing dynamic data structures and performing efficient data manipulation.

## Table of Contents

- [Project Overview](#project-overview)
- [Singly Linked Lists](#singly-linked-lists)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The main goals of this project are to:

- Understand the structure and functionality of singly linked lists.
- Implement functions to manipulate linked lists, including adding, printing, and freeing nodes.

## Singly Linked Lists

Singly linked lists are a type of data structure that consist of nodes where each node contains data and a pointer to the next node. This allows for efficient insertion and deletion of elements. This project includes several files that demonstrate the use of singly linked lists:

- **0-print_list.c**: A function that prints all the elements of a linked list.
- **1-list_len.c**: A function that returns the number of elements in a linked list.
- **2-add_node.c**: A function that adds a new node at the beginning of the linked list.
- **3-add_node_end.c**: A function that adds a new node at the end of the linked list.
- **4-free_list.c**: A function that frees a linked list.
- **lists.h**: Header file containing the structure definition and function prototypes.
- **main.c**: Main file to test the linked list functions.
- **test.c**: Additional test file for further validation.

### Example

Here is an example of how to define a node and print the list:

```c
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

// Define a list node
struct Node {
    int data;
    struct Node* next;
};

// Function to print the linked list
void print_list(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL; // Initialize head
    // Add nodes and print the list (implementation needed)
    print_list(head); // Output: NULL (empty list)
    return 0;
}

