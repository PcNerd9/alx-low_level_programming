#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array using malloc
 *@nmemb: the number of elements in the array
 *@size: the size of each element
 *
 * Return: a void pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, total_size;
	char *ptr;

	total_size = nmemb * size;
	if (!total_size)
		return (NULL);

	ptr = (char *)malloc(sizeof(char) * total_size);
	if (!ptr)
		return (NULL);

	for (i = 0; i < total_size; i++)
		*(ptr + i) = (char) 0;

	return ((void *)ptr);
}
