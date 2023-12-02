#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - print all the content in the hash table
 * in form of dictionary in python
 * @ht: a pointer to the hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **tmp, *inner_tmp;
	unsigned long int i, j = 0;

	if (ht == NULL)
		return;
	tmp = ht->array;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (tmp[i] != NULL)
		{
			if (j != 0)
				printf(", ");
			j++;
			printf("'%s': '%s'", tmp[i]->key, tmp[i]->value);
			if (tmp[i]->next != NULL)
			{
				inner_tmp = tmp[i]->next;
				while (inner_tmp)
				{
					printf(", ");
					printf("'%s': '%s'", inner_tmp->key, inner_tmp->value);
					inner_tmp = inner_tmp->next;
				}
			}
		}
	}
	printf("}\n");
}

