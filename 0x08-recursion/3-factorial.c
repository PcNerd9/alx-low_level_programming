#include "main.h"

/**
 * factorial - compute the factorial of a number
 *@n: the number to computer it factorial
 *
 * Return: the result of the compute
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
