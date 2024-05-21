#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of
 * integers using the Exponential search algorithm
 * @array: a pointer to the first element of thearray to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located otherwise return 0
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, low = 0;

	if (array[i] == value)
		return (i);
	i++;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i *= 2;
	}
	low = i / 2;
	if (i >= size)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", low, size);
		return (binary_search(array + low, size - low, value));
	}
	else
	{
		printf("Value found between indexes [%ld] and [%ld]\n", low, i);
		return (binary_search(array + low, (i - low) + 1, value));
	}
}
