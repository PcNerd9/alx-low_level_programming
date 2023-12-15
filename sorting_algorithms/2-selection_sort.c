#include "sort.h"

/**
 * selection_sort - implement the selection sort algorithm
 * to sort an array of integers
 * @array: a pointer to the array
 * @size: the size of the array
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	int smallest, temp;
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		smallest  = i;
		for (j = i; j < size; j++)
		{
			if (array[smallest] > array[j])
			{
				smallest = j;
			}
		}
		temp = array[smallest];
		array[smallest] = array[i];
		array[i] = temp;
		print_array(array, size);
	}

}
