#include <stdio.h>
#include "search_algos.h"
#include <math.h>


/**
 * jump_search - searches for a value in a sorted array of integers
 * using jump seach algorithm
 * @array: a pointer to the first elements in the array
 * @size: the size of the array
 * @value: the targeted value
 * Return: the index of the value otherwise return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low = 0, high = 0, jump = 0;
	size_t i = 0;

	if (array == NULL)
		return (-1);
	jump = sqrt(size);
	high = low + jump;

	while (high < size)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (array[low] <= value && array[high] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			for (i = low; i <= high; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
			return (-1);
		}
		low = high;
		high = high + jump;
	}
	printf("Value checked array[%ld] = [%d]\n", low, array[low]);
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	for (i = low; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

	}
	return (-1);
}
