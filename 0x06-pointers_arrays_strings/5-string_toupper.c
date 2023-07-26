#include "main.h"

/**
 * string_toupper - convert lowercase to uppercase
 * @str: the string to convert
 *
 *Return: the converted string
 */

char *string_toupper(char *str)
{
	int i = 0;
	int char_byte;

	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			char_byte = *(str + i) - 'a';
			*(str + i) = char_byte + 'A';
		}
		i++;
	}
	return (str);
}
