#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a givein index
 * @n: the number to set it bit
 * @index: the index to set it bit
 *
 * Return: 1 on sucess otherwise return -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int number;

	if (index > 32)
		return (-1);
	number = 1 << index;
	number = ~number;
	*n = *n & number;
	return (1);
}
