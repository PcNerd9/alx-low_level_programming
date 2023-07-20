#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i;
	int j;
	int first;
	int last;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14 ; j++)
		{
			last = j;
			if (j  >= 10)
			{
				first = j / 10;
				_putchar(first + '0');
				last = j % 10;
			}
			_putchar(last + '0');
		}
		_putchar('\n');
	}
}
