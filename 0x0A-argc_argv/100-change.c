#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	int i;
	int coins[5] = {25, 10, 5, 2, 1};
	int change = 0;
	int number;
	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	while (number > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (number >= coins[i])
			{
				change += number / coins[i];
				number = number % coins[i];
				break;
			}
		}
	}
	printf("%d\n", change);
	return (0);
}
