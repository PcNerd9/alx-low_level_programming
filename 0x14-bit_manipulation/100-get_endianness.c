#include "main.h"

/**
 * get_endianness - checks the endianness of a system
 *
 * Return: 1 if little endiance or 0 if big endiance
 */
int get_endianness(void)
{
	int i = 1;
	char c;

	c = i;
	if (c == 1)
		return (1);
	else
		return (0);
}
