#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: a pointer to the string
 *
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int i;
	int lenght;

	lenght = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		lenght += 1;
	}
	return (lenght);
}
