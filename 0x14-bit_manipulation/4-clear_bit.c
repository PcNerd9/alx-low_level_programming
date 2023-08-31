#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the vlaue of a bit to 0 at  a given index
 * @n: the number
 * @index: the index to set it value to 0
 *
 * Return: the evaluate number
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int compare, check, i;

	check = *n;
	for (i = 0; i < index; i++)
	{
		if (check > 1)
			check = check >> 1;
		else
			return (-1);
	}
	compare = ~(1 << index);
	*n = *n & compare;
	return (1);
}
