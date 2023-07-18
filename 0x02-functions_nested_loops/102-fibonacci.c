#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on Success
 */
int main(void)
{
	int i;
	int first;
	int second;
	int sum;

	for (i = 0; i <= 50; i++)
	{
		if (i > 1)
		{
		first = i - 1;
		second = i - 2;
		sum = first + second;
		printf("%d", sum);
		if (i < 50)
		{
			printf(", ");
		}
		}
		else
			printf("%d, ", i);
	}
	putchar('\n');
	return (0);
}
