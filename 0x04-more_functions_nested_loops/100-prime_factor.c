#include <stdio.h>

/**
 *
 *
 *
 */
int main(void)
{
	long i = 612852475143;
	long j;
	long k;
	int is_prime;
	long greatest_no = 0;

	for (j = 2; j < i / 2; j++)
	{
		is_prime = 1;
		if (i % j == 0)
		{
			printf("%ld\n", j);
			for (k = 2; k < j; k++)
			{
				if (j % k == 0)
				{
					is_prime = 0;
					break;
				}
			}
			if (is_prime == 1)
			{
				if (j > greatest_no)
				{
					greatest_no = j;
				}
			}
		}
	}
	printf("%ld\n", greatest_no);
}
