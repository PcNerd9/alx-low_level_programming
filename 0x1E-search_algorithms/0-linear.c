#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>

/**
 * linear_search - search for a value in an array using
 * linear search algorithm
 * @array: the pointer to the first element in the array
 * @size: the size of the array
 * @value: the value to search for in the array
 * Return: the index of the value otherwise  return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		printf("value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
