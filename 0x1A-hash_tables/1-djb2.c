#include "hash_tables.h"

/**
 * hash_djb2 - implement the djb2 algorithm
 * @str: a string to compute it's index
 *
 * Return: the computer index
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_value;
	int car;

	hash_value = 5381;
	while ((c = *str++))
	{
		hash_value = (hash * 33) + car;
	}
	return (hash_value);
}
