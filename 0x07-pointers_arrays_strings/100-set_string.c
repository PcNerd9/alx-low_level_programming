#include "main.h"

/**
 * set_string - sets the value of a pointer to  a char
 *@s: a pointer to a pointer that point to the string
 *@to: points the the character to set s to
 *
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
