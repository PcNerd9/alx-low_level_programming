#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a pointer to a 2 dimensional array of integers
 *@width: the width of the array
 *@height: the height of the array
 *
 *Return: a pointer to the 2-d array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int *pointer;
	int i;

	ptr = (int **)malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
	{
		pointer = (int *)malloc(sizeof(int) * width);
		*(ptr + i) = pointer;
	}
	return (ptr);
}
