#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to set it bit
 * @index: the index to set it bit
 *
 * Return: 1 on success otherwise return -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int number;

	if (index > 32)
		return (-1);
	number = 1 << index;
	*n = *n | number;
	return (1);
}
