#include <stdio.h>

/**
 * interpolation_search - searches for a value in a sorted array
 * of integers using interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index of the value in the array if found otherwise -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = 0, pos = 0;
	int high_value = 0, low_value = 0, compute = 0;

	if (array == NULL)
		return (-1);
	high = size - 1;
	while (high > low)
	{
		high_value = array[high];
		low_value = array[low];
		if (high_value == value)
		{
			printf("Value checked array[%ld] = [%d]\n", high, high_value);
			return (high);
		}
		else if (low_value == value)
		{
			printf("Value checked array[%ld] = [%d]\n", low, low_value);
			return (low);
		}
		compute = (value - array[low]) * (high - low);
		compute = compute / (array[high] - array[low]);
		pos = low + compute;
		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = (pos);
		else if (array[pos] < value)
			low = (pos);

	}
	return (-1);
}
