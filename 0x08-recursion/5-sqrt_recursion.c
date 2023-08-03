#include "main.h"



/**
 *
 *
 *
 */
int computesqrroot(int number, double guess)
{
	if (number - (guess * guess) > 0.000001 || (guess * guess) - number > 0.000001)
	{
		guess = 0.5 * (guess + (number / guess));
		return (computesqrroot(number, guess));
	}
	return (guess);
}


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
