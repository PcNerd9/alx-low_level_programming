#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: a pointer to the array to search an integer from
 * @size: the size of the array
 * @cmp: a pointer to the function that perform the compare task
 *
 * Return: the index of the first element for which the cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
