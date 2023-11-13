#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of byte
 *@s: the pointer to the string to search
 *@accept: the collection of bytes to search
 *
 *Return: a pointer to the first occurence in the string
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
