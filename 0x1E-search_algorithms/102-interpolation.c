#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - search for a value in an array
 * using interpolation search algorithm
 * @array: a pointer to the first element in array
 * @size: the size of the array
 * @value: the targeted value
 * Return: the index of the targeted value otherwise return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1, low = 0, position = 0, result = 0;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		result = (((double)(high - low) / (array[high] - array[low])));
		position = low + result * (value - array[low]);
		if (position >= size)
		{
			printf("Value checked array[%ld] is out of range\n", position);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", position, array[position]);
		if (array[position] == value)
			return (position);
		if (array[position] < value)
			low = position;
		else if (array[position] > value)
			high = position;
	}
	return (-1);
}
