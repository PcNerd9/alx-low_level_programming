#include "main.h"

/**
 * _memcpy - copies memory area
 *@dest: the pointer of the memory location to copy it to
 *@src: the pointer to the memory location to copy from
 *@n: the number of bytes to copy
 *
 * Return: the pointer to the memory location of the copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}
