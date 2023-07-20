#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: number of time the _ character will be printed
 *
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
