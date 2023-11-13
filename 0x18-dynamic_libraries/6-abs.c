#include "main.h"

/**
 * _abs - return the absolute value of its input
 * @n: the parameter to which its absolute value to be returned
 *
 * Return: the absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}
