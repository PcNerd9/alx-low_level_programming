#include "main.h"

/**
 *_isalpha - checks for alphabetic character
 *@c: the byte value of the character to be checked
 *Return: 1 if the character is lower or uppercase else return 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
