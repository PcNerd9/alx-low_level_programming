#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_delete - delete a hash table
 * @ht: a pointer to the head of the hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t **tmp, *prev, *current;

	if (ht == NULL)
		return;
	tmp = ht->array;
	for (i = 0; i < ht->size; i++)
	{
		if (tmp[i] != NULL)
		{
			free(tmp[i]->key);
			free(tmp[i]->value);
			if (tmp[i]->next != NULL)
			{
				current = tmp[i]->next;
				while (current != NULL)
				{
				prev = current;
				current = current->next;
				free(prev->key);
				free(prev->value);
				free(prev);
				}
			}
			free(tmp[i]);
		}
	}
	free(ht);
}
