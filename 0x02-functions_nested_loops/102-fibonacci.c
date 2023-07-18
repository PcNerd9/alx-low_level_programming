#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on Success
 */
int main(void)
{
	int i;
	unsigned long pre_pre;
	unsigned long pre;
	unsigned long sum;

	pre_pre = 1;
	pre = 2;
	for (i = 1; i <= 50; i++)
	{
		if (i > 2)
		{
			sum = pre_pre + pre;
			pre_pre = pre;
			pre = sum;
			printf("%ld", sum);
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
