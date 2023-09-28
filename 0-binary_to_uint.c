#include "main.h"

/**
 * binary_to_uint - convert a binary number to decimal number
 * @b: a pointer to the string of the binary numbers
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int lenght = 0, i;
	unsigned int multiplier = 1, number = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		lenght++;
	for (i = lenght - 1; i >= 0; i--)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			number += (b[i] - '0') * multiplier;
		}
		else
			return (0);
		multiplier *= 2;
	}
	return (number);
}
