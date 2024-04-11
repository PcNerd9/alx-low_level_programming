#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - search a value using binary search algorithm
 * @array: the pointer to the first element in the array
 * @size: the size of the array
 * @value: the target value to search for
 * Return: return the index of the value otherwise return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid = 0, i = 0;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		printf("%d", array[low]);
		for (i = low + 1; i <= high; i++)
		{
			printf(", %d", array[i]);
		}
		printf("\n");
		mid = (high + low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else if (array[mid] < value)
			low = mid + 1;

	}
	return (-1);
}
