#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = (char *)malloc(sizeof(char) * strlen(key) + 1);
	strcpy(new_node->key, key);
	new_node->value = (char *)malloc(sizeof(char) * strlen(value) + 1);
	strcpy(new_node->value, value);
	new_node->next = NULL;
	return new_node;
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;

	if (key == NULL || *key == '\0')
		return 0;
	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	if (current_node == NULL)
	{
		new_node = create_item(key, value);
		if (new_node == NULL)
			return 0;
		ht->array[index] = new_node;
		return 1;
	}
	if (strcmp(current_node->key, key) == 0)
	{
		free(current_node->value);
		current_node->value = strcpy(current_node->value, value);
		return 1;
	}
	new_node = create_item(key, value);
	if (new_node == NULL)
		return 0;
	new_node->next = current_node;
	ht->array[index] = new_node;
	return 1;
}

void print_table(hash_table_t *ht, unsigned long int size)
{
	hash_node_t **tmp, *inner_tmp;
	unsigned long int i;

	if (ht == NULL)
	       return;
	tmp = ht->array;
	printf("----------hash table-----------------\n");
	for (i = 0; i < size; i++)
	{
		if (tmp[i] != NULL)
		{
			printf("key: %s, \tvalue: %s\n", tmp[i]->key, tmp[i]->value);
			if (tmp[i]->next != NULL)
			{
				printf("--------inner linked list--------\n");
				inner_tmp = tmp[i]->next;
				while (inner_tmp)
				{
					printf("\tkey: %s, \tValue: %s\n", inner_tmp->key, inner_tmp->value);
					inner_tmp = inner_tmp->next;
				}
				printf("--------------------\n");
			}
		}
	}
}
