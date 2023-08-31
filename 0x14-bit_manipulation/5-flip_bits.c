#include "main.h"

/**
 * flip_bits - evaluate the number of bits you would need to flip to get
 * from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the total number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xclusive;
	unsigned int lenght = 0;

	xclusive = n ^ m;
	while (xclusive)
	{
		if (xclusive & 1)
			lenght++;
		xclusive = xclusive >> 1; 
	}
	return (lenght);
}
