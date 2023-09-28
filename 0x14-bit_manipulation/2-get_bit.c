#include "main.h"

/**
 * get_bit - computer the value of a bit at a given index
 * @n: the number  to compute
 * @index: the index to get the value from
 *
 * Return: the bit value at that index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	for (i = 0; i < index; i++)
	{
		n = n >> 1;
	}
	return (n & 1);
}
