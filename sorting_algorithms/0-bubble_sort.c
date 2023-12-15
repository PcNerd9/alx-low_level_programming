#include "sort.h"

/**
 * bubble_sort - uses the bubble sort algorithm to sort
 * an array of integers
 * it prints out the steps as it is swapping each pair
 * @array: a pointer to the array
 * @size: the size of the array
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k = 0;
	int temp, sorted = 0;

	if (array == NULL)
		return;
	if (size <= 1)
	       return;	
	k = size;
	for (i = 0; i < size; i++)
	{
		sorted = 0;
		for (j = 0; j < k - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				sorted = 1;
			}
		}
		k--;
		if (sorted == 0)
			break;
	}
}
