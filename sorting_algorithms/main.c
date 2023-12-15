#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {22, 35, 26, 12, 39, 47, 25, 28, 32, 45, 2, 13, 14, 24, 40, 50, 41, 46, 16, 44, 15, 36, 7, 1, 34, 11, 10, 30, 8, 29, 3, 5, 18, 19, 21, 20, 31, 27, 9, 49, 4, 48, 42, 17, 23, 38, 6, 43, 33, 37};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    selection_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
