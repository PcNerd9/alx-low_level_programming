#include "main.h"

/**
 * _strcat - concatinate two strings
 * @dest: the first string
 * @src: the second string to append to the first string
 *
 * Return: the concatinated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int lenght = 0;

	while (dest[i] != '\0')
	{
		lenght++;
		i++;
	}
	while (*src != '\0')
	{
		dest[lenght] = *src;
		src++;
		lenght++;
	}
	dest[lenght] = '\0';
	return (dest);
}
