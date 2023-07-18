#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * Display - displays the input parameter in byte format
 * @n: the n times
 * Return: nothing
 */
void print_times_table(int n)
{
	int a;
	int b;
	int c;

	if (n >= 0 && n < 15)
	{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (c >= 10)
			{
				if (c < 100)
					_putchar(' ');
				display(c);
			}
			else
			{

				if (b > 0 && b <= n)
				{
				_putchar(' ');
				_putchar(' ');
				}
				_putchar(c + '0');
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	}
}
void display(int c)
{
	int a;
	int mul;
	int value;

	mul = 1;
	a = c;
	if (a >= 10)
	{
		while (a >= 10)
		{
			mul *= 10;
			a /= 10;
		}
		_putchar(a + '0');
		while (mul >= 10)
		{
			mul /= 10;
			value = c / mul;
			a = value % 10;
			_putchar(a + '0');
		}
	}
	else
		_putchar(c + '0');
}
