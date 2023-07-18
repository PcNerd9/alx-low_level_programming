#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all the natural numbers from n to 98
 * display - print the number in bytes
 * @c: the parameter to be printed
 * @n: the parameter to be printed by bytes
 *
 *Return: nothing
 */
void display(int c);

void print_to_98(int n)
{
	int a;

	if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			display(a);
			if (a > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (a = n; a <= 98; a++)
		{
			display(a);
			if (a < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

void display(int c)
{
	int mul;
	int a;
	int value;

	if (c < 0)
	{
		_putchar('-');
		c *= -1;
	}
	a = c;
	mul = 1;

	if (c >= 10)
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
	{
		_putchar(c + '0');
	}


}
