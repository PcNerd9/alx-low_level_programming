#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: the type of each data to print in form of string
 *
 *Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s;
	
	va_start(args, format);

	while (format[i] != '\0')
	{

		if
			(i != 0 &&
			(format[i] == 'c' || format[i] == 'i'
			|| format[i] == 'f' || format[i] == 's')
		)
				printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}

				printf("%s", s);
				break;
		}
		i++;
	}
	printf("\n");
}
