#include "main.h"

/**
 * get_endianness - checks the endianness of your system
 *
 * Return: 1 if little endiance otherwise return 0
 */
int get_endianness(void)
{
	unsigned int n = 1;

	char *c = (void *)&n;

	if (*c)
		return (1);
	else
		return (0);
}
