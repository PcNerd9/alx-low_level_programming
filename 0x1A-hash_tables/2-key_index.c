#include "hash_tables.h"

/**
 * key_index - compute the index of a key
 * @key: the string to compute it index
 * @size: the size of the hash table
 *
 * Return: the computed index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int djb2, index;

	djb2 = hash_djb2(key);
	index = djb2 % size;
	return (index);
}
