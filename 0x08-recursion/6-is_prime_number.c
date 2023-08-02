#include "main.h"

/**
 * is_divisible - checks if a number is a prime number
 *@number: the number to check
 *@divisor: all numbers before number to divide number
 *
 *Return: 1 if found divisor otherwise return 0
 */

int is_divisible(int number, int divisor)
{
	if (divisor > 1)
	{
		if (number % divisor == 0)
			return (1);
		return (is_divisible(number, divisor - 1));
	}
	else
		return (0);
}

/**
 * is_prime_number - checks the  a number is prime number
 * @n: the number to check
 *
 * Return: 1 if prime number otherwise return 0
 */
int is_prime_number(int n)
{
	if (n > 1)
	{
		return (!is_divisible(n, n - 1));
	}
	else
		return (0);
}
