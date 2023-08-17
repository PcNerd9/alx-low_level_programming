#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print all the numbers passed to it as an argument
 * @separator: a pointer to the string to use a the separator
 * @n: the number of integers passed
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		printf("%d", va_arg(arg, int));
	}
	printf("\n");
	va_end(arg);
}
