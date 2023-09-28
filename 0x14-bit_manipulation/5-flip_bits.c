#include "main.h"

/**
 * flip_bits - compute the number of bits you would need to flip
 * to get from one number to another
 * @n: the destination number
 * @m: the starting number
 *
 * Return: the number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;

	while (n > 1)
	{
		if ((m & 1) != (n & 1))
			flip++;
		m = m >> 1;
		n = n >> 1;
	}
	if ((m & 1) != (n & 1))
		flip++;
	return (flip);
}
