#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * no_of_words - compute the number of words in a string
 *@str: a pointer to the string
 *
 *Return: the number of words in the string
 */
int no_of_words(char *str)
{
	int lenght = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] != ' ')
			lenght++;
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			lenght++;
	}
	return (lenght);
}

/**
 * strtow - splits a string into words
 *@str: a pointer to the string to split
 *
 * Return: a pointer to the array of the words
 */
char **strtow(char *str)
{
	int no_words;
	int i, j, k, l = 0, lenght = 0;
	char **ptr, *word;

	if (*str == '\0' || str == NULL)
		return (NULL);
	no_words = no_of_words(str);
	if (no_words == 0)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * (no_words + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			lenght = 0;
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
			{
				lenght++, j++;
			}
			word = (char *)malloc(sizeof(char) * (lenght + 1));
			if (word == NULL)
				return (NULL);
			j = i, k = 0;
			while (str[j] != ' ' && str[j] != '\0')
			{
				*(word + k) = str[j];
				j++;
				k++;
			}
			*(word + k) = '\0';
			ptr[l] = word;
			l++;
			i = j - 1;
		}
	}
	*(ptr + l) = NULL;
	return (ptr);
}
