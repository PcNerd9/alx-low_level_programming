#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 *@s: the pointer to the string to check
 *@accept: the bytes to compare
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int lenght = 0;
	int is_present;

	while (*s != '\0')
	{
		is_present = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				lenght++;
				is_present = 1;
				break;
			}
		}
		if (!is_present)
		{
			return (lenght);
		}
		s++;
	}
	return (lenght);
}
