#include "main.h"



/**
 * computesqrroot - calculate the square root of a number
 *@number: the number to find it square root
 *@guess: the number to find a square of that will give us the anser of number
 *
 * Return: the square root
 */
int computesqrroot(int number, double guess)
{
	if (number - (guess * guess) > 0.000001
			|| (guess * guess) - number > 0.000001)
	{
		guess = 0.5 * (guess + (number / guess));
		return (computesqrroot(number, guess));
	}
	return (guess);
}

/**
 * _sqrt_recursion - performs the square root recursively
 * @n: the number to find it square root
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return  (computesqrroot(n, (n / 2.0)));
	}
}
