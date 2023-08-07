#include "main.h"
#include <stdlib.h>

/**
 * argstost - it concatinates all the arguments of your program
 *@ac: the number of the arguments
 *@av: a pointer to the array of the argument
 *
 *Return: a pointer to the concatinated string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k;
	int lenght = 0;
	char *ptr;

	if (!ac || !av)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			lenght++;
	}
	lenght += ac;
	ptr = (char *)malloc(sizeof(char) * lenght);
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*(ptr + k) = av[i][j];
			k++;
		}
		*(ptr + k) = '\n';
		k++;
	}
	*(ptr + k) = '\0';
	return (ptr);
}
