#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - convert a string to integer
 * @s: a pointerto the string
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int i;
	int num = 0;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + (s[i] - '0');
		else
			return (num);
	}
	return (num);
}
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

	if (argc == 1 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= _atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
