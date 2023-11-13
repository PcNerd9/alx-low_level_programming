#include "main.h"

/**
 * _strncat - concatinate two strings
 * @dest: the string to which we are appending to
 * @src: the string we are appending
 * @n: the number of characters in src to append
 *
 * Return: the concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int d_lenght = 0;
	int s_lenght = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		d_lenght++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		s_lenght++;
	}
	if (n > s_lenght)
	{
		n = s_lenght;
	}
	for (i = 0; i < n; i++)
	{
		dest[d_lenght] = *(src + i);
		d_lenght++;
	}
	dest[d_lenght] = '\0';
	return (dest);
}
