#include "main.h"

/**
 *times_table - prints the 9 times table, starting with 0
 *
 *Return: nothing
 */
void times_table(void)
{
	int a;
	int b;
	int c;
	int first;
	int last;


	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c >= 10)
			{
				first = c / 10;
				last = c % 10;
				_putchar(first + '0');
				_putchar(last + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(c + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
