#include <stdio.h>

/**
 *
 *
 *
 */

int main(void)
{
	int result  = -(-1234567890);
	int result1 = (-1 * -1234567890);

	printf("Result: %d\n", result);
       printf("Result1: %d\n", result1);
	return (0);
}	
