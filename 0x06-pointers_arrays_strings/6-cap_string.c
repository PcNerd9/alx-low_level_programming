#include "main.h"

/**
 * cap_string - the function capitalize every character that start a word using
 *@str: the string to capitalize
 *
 * Return: the capitalize string
 */

char *cap_string(char *str)
{
	char seperator[13] = {' ', '\t', '\n',
		',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};
	int i = 0;
	int j = 0;
	int char_byte;

	while (*(str + i) != '\0')
	{
		if (i == 0 && *(str + i) >= 'a' && *(str + i) <= 'z')
		{
			char_byte = *(str + i) - 'a';
			*(str + i) = *(str + i) + 'A';
		}
		for (j = 0; j < 13; j++)
		{
			if (*(str + i) == *(seperator + j))
			{
				if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
				{
					char_byte = *(str + i + 1) - 'a';
					*(str + i + 1) = char_byte + 'A';
					i++;
					break;
				}
			}
		}
		i++;
	}
	return (str);
}
