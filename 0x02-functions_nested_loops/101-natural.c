#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if Success
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 2; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
