#include "main.h"

/**
 * _strcpy - copies the string pointed to by pointer to another pointer
 * @dest: the pointer to copy the string to
 * @src: the pointer where the string is being copied from
 *
 * Return: the pointer to the copies string
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int lenght = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		lenght += 1;
	}
	dest[lenght] = '\0';
	return (dest);

}
