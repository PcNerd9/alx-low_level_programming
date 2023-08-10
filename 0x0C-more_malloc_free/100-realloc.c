#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the the memory space to change it size
 *@old_size: the size of the initial size
 *@new_size: the new size
 *
 * Return: a pointer to the new memory space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_pointer;
	char *pointer = (char *)ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	else if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	new_pointer = malloc(new_size);
	for (i = 0; i < old_size; i++)
	{
		*(new_pointer + i) = *(pointer + i);
	}
	free(ptr);
	return ((void *)new_pointer);
}
