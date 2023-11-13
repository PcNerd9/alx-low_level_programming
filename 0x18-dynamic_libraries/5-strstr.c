#include "main.h"
#include <stddef.h>


/**
 * _strstr - locates a substring. it worl exactly like the strstr func
 *@haystack: points the the string to search a substring from
 *@needle: points to the string to search in another string
 *
 * Return: a pointer to the location of the first occurence else retrn 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int it_contain;

	while (*haystack != '\0')
	{
		it_contain = 0;
		if (*haystack == needle[0])
		{
			for (i = 0; needle[i] != '\0'; i++)
			{
				if (*(haystack + i) == needle[i])
				{
					it_contain = 1;
				}
				else
				{
					it_contain = 0;
					break;
				}
			}
			if (it_contain)
			{
				return (haystack);
			}
			else
				haystack += i - 1;
		}
		haystack++;
	}
	return (NULL);
}
