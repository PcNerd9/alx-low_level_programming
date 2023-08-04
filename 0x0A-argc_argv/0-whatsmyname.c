#include <stdio.h>

/**
 * main - the entry point, only print the name of the program
 *@argc: contains the number of arguments passed
 *@argv: a pointer to the array of arguments
 *
 * Return: 0 is success
 */

int main(int  argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
