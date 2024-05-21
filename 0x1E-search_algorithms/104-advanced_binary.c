#include <stdio.h>
#include "search_algos.h"

/**
 * bin_search - implement the binary search algorithm recursively
 * @arr: a pointer to the beginning of the array
 * @value: the target value
 * @left: the begining of the array
 * @right: the end of the array
 *
 * Return: the index of the value otherwise return -1
 */
int bin_search(int *arr, int value, size_t left, size_t right)
{
	size_t mid = 0, i;

	if (left > right)
		return (-1);

	printf("Searching in array: %d", arr[left]);
	for (i = left + 1; i <= right; i++)
		printf(", %d", arr[i]);
	printf("\n");

	if (arr[left] == value)
		return (left);

	mid = left + (right - left) / 2;
	if (arr[mid] >= value)
		return (bin_search(arr, value, left, mid));
	else
		return (bin_search(arr, value, mid + 1, right));
}
/**
 * advanced_binary - search a value using binary search algorithm
 * @array: the pointer to the first element in the array
 * @size: the size of the array
 * @value: the target value to search for
 * Return: return the index of the value otherwise return -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (bin_search(array, value, 0, size - 1));
}
