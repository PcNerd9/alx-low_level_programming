#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on Success
 */
int main(void)
{
	int i;
	unsigned long long pre_pre;
	unsigned long long pre;
	unsigned long long sum;

	pre_pre = 1;
	pre = 2;
	for (i = 1; i <= 98; i++)
	{
		if (i > 2)
		{
			sum = pre_pre + pre;
			pre_pre = pre;
			pre = sum;
			printf("%lld", sum);
		if (i < 98)
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
