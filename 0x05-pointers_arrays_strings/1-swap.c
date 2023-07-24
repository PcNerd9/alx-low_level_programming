#include "main.h"

/**
 * swap_int - the function swap the values in variables
 * @a: the pointer to the first value
 * @b: the pointer to the second value
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
