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
	char letter[56] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
			'i', 'j', 'k', 'l', 'm',
			'n', 'o', 'p', 'q', 'r',
			's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
			'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
			'I', 'J', 'K', 'L', 'M',
			'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
			'V', 'W', 'X', 'Y', 'Z'};

	char replace[56] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
			'w', 'x', 'y', 'z',
			'a', 'b', 'c', 'd', 'e', 'f',
			'g', 'h', 'i', 'j', 'k', 'l', 'm',
			'N', 'O', 'P', 'Q', 'R', 'S', 'T',
			'U', 'V', 'W', 'X', 'Y', 'Z',
			'A', 'B', 'C', 'D', 'E', 'F',
			'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	int i = 0;
	int j;

	while (*(str + i) != '\0')
	{
		for (j = 0; j < 56; j++)
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
