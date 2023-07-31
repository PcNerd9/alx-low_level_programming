#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of 2 diagonals of a square matrix of int
 *@a: a pointer to the 2d array
 *@size: the size of the 2d array
 *
 *Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int l = size - 1;
	int k = 0;
	unsigned int first_sum = 0;
	unsigned int second_sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == k && j == k)
				first_sum += *(a + i * size + j);
			if (i == k && j == l)
				second_sum += *(a + i * size + j);
		}
		k++;
		l--;
	}
	printf("%d, %d\n", first_sum, second_sum);
}
