#include "main.h"

/**
 * print_alphabet_x10 - Print all the alphabets 10 times
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(j + 'a');
		}
		_putchar('\n');
	}
}
