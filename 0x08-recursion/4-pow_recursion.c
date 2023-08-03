#include "main.h"

/**
 * _pow_recursion  - compute power arithmetic
 *@x: the base number
 *@y: the power
 *
 * Return: the result of the compute
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
