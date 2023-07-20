#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 * @n: how long the diagonal line will be
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;
	int j;
	int k;

	j = 0;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (k = 0; k < j; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			j += 1;
		}
	}
	else
	{
		_putchar('\n');
	}

}
