#include <stdio.h>


/**
 * _atoi - convert a string to an integer
 * @s: a pointer to the string
 *
 * Return: an integer of the string
 */

int _atoi(char *s)
{
	int i;
	int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
		}
		else
			return (0);
	}
	return (num);
}
/**
 * main - adds positive numbers
 * @argc: the number of arguments passed
 * @argv: a pointer to the array of arguments passed
 *
 * Return: the sum of the numbers
 */

int main(int argc, char *argv[])
{
	int i;
	int num;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = _atoi(argv[i]);
		if (num == 0 && argv[i] != 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
