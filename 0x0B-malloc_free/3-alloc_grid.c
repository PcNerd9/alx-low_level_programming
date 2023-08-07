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
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		pointer = (int *)malloc(sizeof(int) * width);
		if (pointer == NULL)
		{
			for (j = i - 1; j >= 0; j--)
			{
				free(ptr[j]);
				free(ptr);
			}
			return (NULL);
		}
		*(ptr + i) = pointer;
	}
	return (ptr);
}
