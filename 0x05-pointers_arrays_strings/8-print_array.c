#include "main.h"
#include <stdio.h>
/**
 * print_array - it prints n elements of an array of integers
 * @a: a pointer to the array to be printed
 * @n: the number of elements to be printed from the array
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
