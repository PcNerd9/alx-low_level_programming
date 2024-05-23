#include <stdio.h>

/**
 * bin_search - search a value using binary search algorithm
 * @array: the pointer to the first element in the array
 * @size: the size of the array
 * @value: the target value to search for
 * Return: return the index of the value otherwise return -1
 */

int bin_search(int *array, size_t size, int value)
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

	if (array == NULL)
		return (NULL);
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
		printf("Value found between indexes [%ld] and [%ld]\n", low, size - 1);
		return ((i / 2) + bin_search(array + low, size - low, value));
	}
	else
	{
		printf("Value found between indexes [%ld] and [%ld]\n", low, i);
		return ((i / 2) + bin_search(array + low, (i - low) + 1, value));
	}
}
