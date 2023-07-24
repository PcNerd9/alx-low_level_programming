#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string we want to manipulate
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	int lenght = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		lenght += 1;
	}
	for (i = 0; i < lenght; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
