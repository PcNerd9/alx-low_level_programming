#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print all the printable byte value in hex and char format
 *@b: the pointer to the buffer
 *@size: the size of the buffer
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (i % 10 == 0)
			{
				if (i != 0)
					putchar('\n');
				printf("%08x: ", i);
				for (j = i; j < i + 10; j++)
				{
					if (j % 2 == 0)
					{
					if (j < size)
						printf("%02x%02x ", b[j], b[j + 1]);
					else
						printf("     ");
					}
				}
			}
			if (b[i] >= 32 && b[i] < 127)
				putchar(b[i]);
			else
				putchar('.');
		}
	}
	putchar('\n');
}
