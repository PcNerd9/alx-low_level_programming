#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: the pointer to the string to be printed
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;
	int lenght = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		lenght += 1;
	}
	for (i = lenght - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
