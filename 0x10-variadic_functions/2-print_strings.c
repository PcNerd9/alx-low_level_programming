#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL || n == 0)
		return;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(args, char *) == NULL)
		{
			printf("(nil)\n");
			return;
		}
	}
	va_end(args);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf("%s", separator);
		printf("%s", va_arg(args, char *));
	}
	printf("\n");
	va_end(args);
}
