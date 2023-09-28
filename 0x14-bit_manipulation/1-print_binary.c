#include <stdio.h>
#include "main.h"

/**
 * print_binary - print a number in binary
 * @n: the number to print
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar ('0' + (n & 1));
}
