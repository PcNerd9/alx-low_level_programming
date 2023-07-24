#include "main.h"

/**
 * rev_string - it reverse a string
 * @s: a pointer to the string to be reversed
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, j, k;
	int lenght = 0;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		lenght += 1;
	}
	lenght -= 1;
	for (j = 0; j < lenght / 2; j++)
	{
		k = s[j];
		s[j] = s[(lenght) - j];
		s[(lenght) - j] = k;
	}
}
