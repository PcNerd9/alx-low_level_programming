#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the pointer to the string to be converted
 *
 * Return: the integer value
 */

int _atoi(char *s)
{
	int i;
	int sign = 1;
	int num = 0;
	int is_number = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= 48 && s[i] < 58)
		{
			num = num * 10 + (s[i] - 48);
			is_number = 1;
			if (s[i + 1] >= 48 && s[i + 1] < 58)
			{
				continue;
			}
			else
			{
				break;
			}
		}
	}
	num *= sign;
	if (is_number == 1)
		return (num);
	else
		return (0);
}
