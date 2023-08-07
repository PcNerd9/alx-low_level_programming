#include "main.h"
#include <stdlib.h>

/**
 * _strlen - compute the lenght of a string
 *@s: a pointer to the string
 *
 *Return: the lenght of of the string
 */

int _strlen(char *s)
{
	int i;
	int lenght = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		lenght++;
	}
	return (lenght);
}

/**
 * str_concat - concatinate two string
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, lenght1, lenght2;
	int total_lenght;
	char *ptr;

	if (s1 != NULL)
	{
		lenght1 = _strlen(s1);
	}
	else
	{
		lenght1 = 0;
		s1 = "";
	}
	if (s2 != NULL)
	{
		lenght2 = _strlen(s2);
	}
	else
	{
		lenght2 = 0;
		s2 = "";
	}
	total_lenght = ((lenght1 + lenght2 + 1) * sizeof(char));

	ptr = (char *)malloc(total_lenght);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < lenght1; i++)
	{
		*(ptr + i) = *(s1 + i);
	}
	for (i = 0; i <= lenght2; i++)
	{
		*(ptr + i + lenght1) = *(s2 + i);
	}
	return (ptr);
}
