#include "main.h"

/**
 * print_number - print an integer using _putchar
 *@n: the integer to print
 *
 * Return: nothing
 */

void print_number(int n)
{
	int remainder;
	int mul = 1;
	unsigned int num;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	num = n;
	if (num >= 10)
	{
		while (num >= 10)
		{
			mul *= 10;
			num /= 10;
		}

		while (mul >= 1)
		{
			remainder = (n / mul) % 10;
			_putchar(remainder + '0');
			mul /= 10;
		}
	}
	else
	{
		_putchar(n + '0');
	}
}
