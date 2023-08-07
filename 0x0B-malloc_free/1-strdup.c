#include "main.h"
#include <stdlib.h>


/**
 * _strdup - creates a newly allocated spaces in memory, which contains a copy
 * of the string given as a parameter
 *@str: a pointer to the string to copy into the memory
 *
 *Return: a pointer to the newly created string
 */

char *_strdup(char *str)
{
	int i;
	int lenght = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; *(str + i) != '\0'; i++)
	{
		lenght++;
	}
	ptr = (char *)malloc(sizeof(char) * lenght);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= lenght; i++)
	{
		*(ptr + i) = *(str + i);
	}
	return (ptr);
}
