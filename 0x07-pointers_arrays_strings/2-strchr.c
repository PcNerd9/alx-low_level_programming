#include "main.h"

/**
 * _strchr - locates a character in a string
 *@s: the pointer to the string
 *@c: the character to search for
 *
 * Return: a pointer to the first occurence or 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
