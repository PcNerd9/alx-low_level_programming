#include "bit.h"
#include <stddef.h>

/**
 * _strlen - compute the lenght of a string
 * @string: a pointer to the string
 *
 * Return: the lenght
 */
unsigned int _strlen(const char *string)
{
	unsigned int i, lenght = 0;

	for (i = 0; string[i] != '\0'; i++)
	{
		lenght++;
	}
	return (lenght);
}

/**
 * binary_to_uint - convert a binary string to integer
 * @b: a pointer to the binary string
 *
 * Return: the converted integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, base = 1;
	int i, lenght;

	if (b == NULL)
		return (0);
	lenght = _strlen(b);
	for (i = lenght - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
			decimal += (b[i] - '0') * base;
		else
			return (0);
		base *= 2;
	}
	return (decimal);
}
