#include "main.h"

/**
 * print_triangle - prints a triangle in the terminal
 *@size: the size of the triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;
	int l;
	int m;

	k = size;
	l = 1;
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < k; j++)
			{
				_putchar(' ');
			}
			for (m = 0; m < l; m++)
			{
				_putchar('#');
			}
			k -= 1;
			l += 1;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
