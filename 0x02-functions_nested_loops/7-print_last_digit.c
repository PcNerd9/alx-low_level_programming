#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the parameter to computes its last digit
 *
 * Return: The last digit of the number computed
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n *= -1;
	}
	last = n % 10;
	_putchar(last + '0');
	return (last);
}
