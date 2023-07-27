#include "main.h"
#include <stdio.h>

/**
 * _strlen - compute the lenght of a string
 * @str: the string to compute
 *
 * Return: the lenght of the string
 */

int _strlen(char *str)
{
	int i;
	int lenght = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		lenght++;
	}
	return (lenght);
}

/**
 * swap_ptr - swap the address the pointers are pointing to
 * @a: the first pointer
 * @b: the second pointer
 *
 * Return: nothing
 */
void swap_ptr(char **a, char **b)
{
	char *l;

	l = *a;
	*a = *b;
	*b = l;
}

/**
 * swap_int - swap the integer value in each variable
 * @a: the pointer to the first integer
 * @b: the pointer to the second integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}

/**
 * reverse_string - reverse the arrangement of an array
 * @str: the string to reverse
 *
 * Return: the reversed string
 */
char *reverse_string(char *str)
{
	int i;
	char k;
	int len = _strlen(str);

	for (i = 0; i < len / 2; i++)
	{
		k = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = k;
	}
	return (str);
}

/**
 * infinite_add - compute the summation of infinite numbers
 * @n1: the first number in form of string
 * @n2: the second number in form of string
 * @r: the buffer to save the result
 * @size_r: the size of the buffer
 *
 * Return: the buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_len, n2_len, sum;
	int remainder = 0;
	int i = 0;
	int j = 0;

	n1_len = _strlen(n1);
	n2_len = _strlen(n2);
	if (n2_len > n1_len)
	{
		swap_int(&n1_len, &n2_len);
		swap_ptr(&n1, &n2);
	}
	if (size_r > n1_len + 1)
	{
		for (i = (n1_len - 1); i >= 0; i--)
		{
			n2_len--;
			if (n2_len >= 0)
				sum = ((n1[i] - '0') + (n2[n2_len] - '0')) + remainder;
			else
				sum = (n1[i] - '0') + remainder;
			remainder = 0;
			if (sum >= 10)
			{
				*(r + j) = (sum % 10) + '0';
				remainder = sum / 10;
			}
			else
			{
				*(r + j) = sum + '0';
			}
			j++;
		}
		if (remainder)
			*(r + j) = remainder + '0';
	}
	else
		return (0);
	return (reverse_string(r));
}
