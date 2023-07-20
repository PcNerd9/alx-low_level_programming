#include <stdio.h>

/**
 *
 *
 *
 */
int main(void)
{
	long i = 612852;
	long j;
	long k;
	long l;
	int is_prime = 1;
	long greatest_no = 0;

	j = i / 2;

	for (k = 2; k < i; k++)
	{
		is_prime = 1;
		if (i % k == 0)
		{
			printf("%ld\n", k);
			for (l = 2; l < k; l++)
			{
				if (k % l == 0)
				{
					is_prime = 0;
					break;
				}
				if (is_prime = 1)
				{
					if (k > greatest_no)
					{
						greatest_no = k;
					}
				}
			}
		}
	}
	printf("%ld\n", greatest_no);
	return (0);

}
