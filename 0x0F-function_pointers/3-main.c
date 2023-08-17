#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "function_pointers.h"

/**
 * main - performs simple operation
 * @argc: the number of command line argument
 * @argv: an array of the command line arguments passed
 *
 * Return: the exit code
 */

int main(int argc, char *argv[])
{
	int result;
	int (*function)(int, int);

	function = get_op_func(argv[2]);
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (function != NULL)
	{
		if ((!strcmp(argv[2], "/") || !(strcmp(argv[2], "%"))) && atoi(argv[3]) == 0)
		{
			printf("Error\n");
			return (100);
		}
		result = function(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (99);
	}
	return (0);
}
