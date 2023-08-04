#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers passed from the command line
 * @argc: the number of arguments passed
 * @argv: a pointer to the array of arguments passed
 *
 * Return: 0 is successful
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
