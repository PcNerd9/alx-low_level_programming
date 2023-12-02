#include "hash_tables.h"
#include <stdlib.h>

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long i;
	hash_table_t *table;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
		return NULL;

	table->size = size;
	table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) *size);
	if (table->array == NULL)
	{
		free(table);
		return NULL;
	}
	if (table->array == NULL)
	{
		free(table);
		return NULL;
	}
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
