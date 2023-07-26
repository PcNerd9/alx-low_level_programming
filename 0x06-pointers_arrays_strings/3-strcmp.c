#include "main.h"

/**
 * _strcmp - compare if the second string is in the first string
 *@s1: the first string we are comparing with
 *@s2: the second string we are comparing with
 *
 * Return: the difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			return (*(s1 + i) - *(s2 + i));
		}
	}
	return (0);
}
