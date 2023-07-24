#include "main.h"

/**
 * puts_half - print half of a string
 * @str: the  string to be printed
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, half_len;
	int lenght = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		lenght += 1;
	}
	if (lenght % 2 == 1)
	{
		lenght += 1;
	}
	half_len = lenght / 2;
	for (i = half_len; i < lenght; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
