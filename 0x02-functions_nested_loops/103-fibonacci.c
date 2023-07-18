#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on Success
 */
int main(void)
{
	unsigned int pre_pre;
	unsigned int pre;
	unsigned int sum;
	unsigned int total_add;

	sum = 0;
	pre_pre = 1;
	pre = 2;
	total_add = 2;
	while (sum < 4000000)
	{
		sum = pre_pre + pre;
		pre_pre = pre;
		pre = sum;
		if (sum % 2 == 0)
		{
			total_add += sum;
		}
	}
	printf("%d\n", total_add);
	return (0);
}
