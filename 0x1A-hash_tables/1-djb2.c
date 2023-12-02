#include "hash_tables.h"

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
