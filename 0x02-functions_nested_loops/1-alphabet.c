#include "main.h"

/**
 * print_alphabet - print all the alphabets in lower case
 *
 * _putchar - Writes to the stdout
 * Return: 0 when Successful
 */
void print_alphabet(void)
{
	int a;

	for (a = 0; a < 26; a++)
	{
		_putchar(a + 'a');
	}
	_putchar('\n');
}
