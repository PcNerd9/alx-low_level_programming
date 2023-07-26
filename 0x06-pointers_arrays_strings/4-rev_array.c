#include "main.h"

/**
 * reverse_array - reverse the arrangement of all the elements in the array
 * @a: the array to be reversed
 *@n: the size of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int k, i;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = k;
	}
}
