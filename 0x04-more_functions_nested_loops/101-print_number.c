#include "main.h"

/**
 * print_number - prints an integer
 *@n: the integer to print
 *
 *Return: nothing
 */
void print_number(int n)
{
	int i;
	int j;
	int mul;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	mul = 1;
	i = n;
	if (n >= 10)
	{
		while (i >= 10)
		{
			mul *= 10;
			i /= 10;
		}
		_putchar(i + '0');
		while (mul >= 10)
		{
			mul /= 10;
			i = n / mul;
			j = i % 10;
			_putchar(j + '0');
		}
	}
	else
	{
		_putchar(n + '0');
	}
}
