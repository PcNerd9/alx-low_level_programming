#include "main.h"

/**
 * _memset - fills a memory with a constant byte
 *@s: the pointer to the memory location to fill
 *@b: the byte to use fill the memory location
 *@n: the number of bytes of the memory area
 *
 * Return: the pointer to the filled memory location
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
