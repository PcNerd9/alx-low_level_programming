#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all its parameters
 * @n: the number of arguments passed
 *
 * Return: the result of the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;
	int value;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(args, int);
		sum += value;
	}
	va_end(args);
	return (sum);
}
