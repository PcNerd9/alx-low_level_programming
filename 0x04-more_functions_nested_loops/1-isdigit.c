#include "main.h"

/**
 * _isdigit - checks if the input is a digit
 * @c: the byte value of the input to be checked
 *
 * Return: 1 if true else return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
