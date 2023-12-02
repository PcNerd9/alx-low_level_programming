#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int djb2, index;

	djb2 = hash_djb2(key);
	index = djb2 % size;
	return index;
}
