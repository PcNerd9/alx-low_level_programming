#include "main.h"

/**
 * get_bit - get the bit at a particular index in a number
 * @n: the number to get the inedex from
 * @index: the index bit to get
 *
 * Return: the bit at that index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index) & 1;
	return (bit);
}
