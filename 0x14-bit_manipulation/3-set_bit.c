#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number
 * @index: the index to set it value to 1
 *
 * Return: the number after the operation
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int compare;

	compare = 1 << index;

	if (compare > *n)
		return (-1);
	*n = *n | compare;
	return (1);
}
