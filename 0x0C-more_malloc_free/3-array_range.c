#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *@min: the minimum value to start the initialization from
 *@max: the maximum value to end the initialization with
 *
 * Return:  a pointer to the array
 */

int *array_range(int min, int max)
{
	int i, lenght;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	lenght = max - min;

	ptr = (int *)malloc(sizeof(int) * (lenght + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; i <= lenght; i++)
	{
		*(ptr + i) = min + i;
	}
	return (ptr);
}
