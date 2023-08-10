#include "main.h"
#include <stdlib.h>

/**
 * _strlen - compute the lenght of a string
 *@str: a pointer to the string
 *
 *Return: the lenght of the string
 */
int _strlen(char *str)
{
	int i, lenght = 0;

	for (i = 0; str[i] != '\0'; i++)
		lenght++;

	return (lenght);
}

/**
 * string_nconcat - concatinates two strings
 *@s1: the first string
 *@s2: the second string
 *@n: the number of characters to concatinate to
 * the first string from the second string
 *
 * Return: a pointer to the newly allocated space in the memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0;
	unsigned int lenght1, lenght2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	lenght1 = _strlen(s1);
	lenght2 = _strlen(s2);

	if (n >= lenght2)
		n = lenght2;
	ptr = (char *)malloc(sizeof(char) * (lenght1 + n + 1));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(ptr + j) = *(s1 + i);
		j++;
	}

	for (i = 0; i < n; i++)
	{
		*(ptr + j) = *(s2 + i);
		j++;
	}
	*(ptr + j) = '\0';

	return (ptr);
}
