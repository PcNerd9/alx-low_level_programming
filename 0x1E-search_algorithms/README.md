# 0x1E - Search Algorithms

This repository contains implementations of various search algorithms in C. Search algorithms are fundamental for efficient data retrieval, and this project explores several techniques and their complexities.

## Table of Contents

- [Project Overview](#project-overview)
- [Search Algorithms](#search-algorithms)
- [Learning Objectives](#learning-objectives)
- [Getting Started](#getting-started)
- [Contributing](#contributing)
- [License](#license)

## Project Overview

The primary goals of this project are to:

- Understand and implement various search algorithms.
- Analyze the time and space complexities of each algorithm.
- Compare the efficiency of different searching methods.

## Search Algorithms

This project includes several search algorithms:

- **0-linear.c**: Implementation of the linear search algorithm.
- **1-binary.c**: Implementation of the binary search algorithm.
- **100-jump.c**: Implementation of the jump search algorithm.
- **102-interpolation.c**: Implementation of the interpolation search algorithm.
- **103-exponential.c**: Implementation of the exponential search algorithm.
- **104-advanced_binary.c**: An advanced implementation of binary search.
- **105-jump_list.c**: Implementation of jump search using a linked list.
- **106-linear_skip.c**: Implementation of the linear skip search algorithm.

### Complexity Analysis

The project also includes files for complexity analysis:

- **107-O**: A file containing time complexity analysis for the algorithms.
- **108-O**: Additional complexity files for further understanding.
- **2-O**: Further analysis on average and worst-case scenarios.
- **3-O**: Additional notes on complexity.
- **4-O**: Further comparisons of space complexities.
- **5-O**: Final thoughts on efficiency.
- **6-O**: Conclusion of the analysis.

### Example

Here's an example of how to use the linear search algorithm:

```c
#include "search_algos.h"

int main(void)
{
    int array[] = {0, 1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int result = linear_search(array, size, 3);

    if (result != -1)
        printf("Found at index: %d\n", result);
    else
        printf("Not found\n");

    return 0;
}

