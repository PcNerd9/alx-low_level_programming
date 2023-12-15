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
    int array[] = {37, 5, 40, 49, 1, 16, 28, 9, 31, 36, 3, 22, 43, 20, 30, 11, 35, 18, 4, 50, 41, 27, 26, 6, 24, 48, 21, 44, 46, 45, 12, 29, 15, 33, 2, 13, 17, 32, 10, 38, 14, 34, 23, 39, 8, 42, 19, 7, 25, 47};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
