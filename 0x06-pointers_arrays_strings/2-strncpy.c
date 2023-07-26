#include "main.h"

/**
 *
 *
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int lenght = 0;
	int i = 0;

	while (*(src + i) != '\0')
	{
		lenght++;
		i++;
	}
	for ( i = 0; i < n; i++)
	{
		if (i < lenght)
		{
			*(dest + i) = *(src + i);
		}
		else
		{
			*(dest + i) = '\0';
		}
	}
	return (dest);
}
