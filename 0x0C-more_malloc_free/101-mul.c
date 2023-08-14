#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 */

int _strlen(char *str)
{
	int i, lenght = 0;

	for (i = 0; str[i] != '\0'; i++)
		lenght++;
	return (lenght);
}

void _memset(char *ptr, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = '0';
	}
}

int main(int argc, char *argv[])
{
	int i, j, shift = 0, carryover = 0, addition = 0, add = 0, multiply, l;
	int lenght1, lenght2, result_len;
	char *result;

	lenght1 = _strlen(argv[1]);
	lenght2 = _strlen(argv[2]);
	result_len = lenght1 + lenght2;

	if (argc != 3)
		return (0);
	result = (char *)malloc(sizeof(int) * (result_len + 1));
	if (!result)
		return (0);

	_memset(result, (result_len + 1));

	result[result_len] = '\0';
	for (i = lenght2 - 1; i >= 0; i--)
	{
		carryover = 0;
		l = result_len - 1;
		for (j = lenght1 - 1; j >= 0; j--)
		{

			multiply = (argv[1][j] - '0') * (argv[2][i] - '0') + carryover;
			carryover = 0;

	       		if (multiply >= 10)
			{
				addition = (result[l - shift] - '0') + (multiply % 10) + add;
				carryover = multiply / 10;
				add = 0;
			}
			else
			{
				addition = (result[l - shift] - '0') + multiply + add;
			}
			if (addition >= 10)
			{
				result[l - shift] = (addition % 10) + '0';
				add = addition / 10;
			}
			else
				result[l - shift] = addition + '0';
			l--;

		}
		shift++;
	}
	if (!add)
	{
		result[l  - shift] = add + '0';
	}
	else
		result[l - shift] = '\0';
	printf("%s\n", result);
	
	return (0);
}

