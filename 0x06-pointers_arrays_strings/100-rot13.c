#include "main.h"
#include <stdio.h>
/**
 * rot13 - encode a string using rot13 encryption format
 *@str: the string to encode
 *
 *Return: encoded string
 */

char *rot13(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			str[i] = str[i] + 13;
		}
		else if ((str[i] > 'm' && str[i] <= 'z') || (str[i] > 'M' && str[i] <= 'Z'))
		{
			str[i] = str[i] - 13;
		}
	}
	return (str);
}
