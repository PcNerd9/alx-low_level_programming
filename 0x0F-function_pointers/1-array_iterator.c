#include "function_pointers.h"
#include <stddef.h>


/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @array: a pointer to the array
 * @size: the size of the array
 * @action: a pointer to the function to be executed
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && size != 0 && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
