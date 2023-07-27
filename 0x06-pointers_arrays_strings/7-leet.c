#include "main.h"

/**
 * leet - encode a string in 1337 encryption format
 *@str: the string to be encrypted
 *
 * Return: the encrypted string
 */

char *leet(char *str)
{
	char letter[10]  = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replace[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0;
	int j;

	while (*(str + i) != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = replace[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
