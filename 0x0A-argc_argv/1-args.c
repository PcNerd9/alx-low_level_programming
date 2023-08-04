#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments passed
 * @argv: a pointer to the array of arguments passed
 * Return: 0 is successfull
  */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
