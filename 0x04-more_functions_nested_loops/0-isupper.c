#include "main.h"

/**
 * _isupper - check if a number is uppercase
 * @c: the byte value of the character to be checked
 *
 * Return: 0 if Success
 */
int _isupper(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
