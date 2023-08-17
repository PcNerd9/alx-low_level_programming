#include "function_pointers.h"

/**
 * print_name - the function call a function that print a name
 * @name: a pointer to the name to print
 * @f: a pointer to the function to be called
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
