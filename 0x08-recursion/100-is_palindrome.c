#include "main.h"

/**
 * check_palindrome - checks if a string is a palindrome string
 *@s1: the beginning of the string to check
 *@s2: a pointer to the end of the string
 *
 *Return: 1 if the string is palindrome otherwise return 0
 */

int check_palindrome(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (0);
	if (*s1 == '\0')
		return (1);
	return (check_palindrome((s1 + 1), (s2 - 1)));
}

/**
 * _strlen - compute the lenght of a string
 * @s: the pointer to the string
 *
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * is_palindrome - evaluate a string to check if it is a palindrome string
 * @s: a pointer to the string to check
 *
 * Return: 1 if true else return false
 */
int is_palindrome(char *s)
{
	return (check_palindrome(s, (s + _strlen(s) - 1)));
}
