#include "bit.h"

/**
 * _strlen - compute the lenght of a s tring
 * @string: a pointer to the string
 *
 * Return: the lenght computed
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
 * binary_to_uint - convert a binary string to decimal integer
 * @b: a pointer to the binary string
 *
 * Return: the decimal integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, base = 1, lenght;
	int i;

	if (b == NULL)
		return (0);
	lenght = _strlen(b);
	for (i = lenght - 1; i >= 0; i--)
	{
		if (b[i] >= '0' && b[i] <= '9')
			decimal += (b[i] - '0') * base;
		else
			return (0);
		base *= 2;
	}
	return (decimal);
}
