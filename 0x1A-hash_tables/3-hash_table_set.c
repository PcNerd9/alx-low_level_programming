#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * create_item - create a new node to add to the hash table
 * @key: the key of the node
 * @value: the value of the node
 *
 * Return: the new node created
 */
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
	return (new_node);
}

/**
 * hash_table_set - add a new node to the hash table
 * @ht: a pointer to the hash table
 * @key: the key of the new node
 * @value: the value of the new node
 *
 * Return: 1 on success otherwise return 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;

	if (ht == NULL)
		return (0);
	if (key == NULL || *key == '\0' || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	if (current_node == NULL)
	{
		new_node = create_item(key, value);
		if (new_node == NULL)
			return (0);
		ht->array[index] = new_node;
		return (1);
	}
	if (strcmp(current_node->key, key) == 0)
	{
		free(current_node->value);
		current_node->value = (char *)malloc(sizeof(char) * strlen(value) + 1);
		current_node->value = strcpy(current_node->value, value);
		return (1);
	}
	new_node = create_item(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = current_node;
	ht->array[index] = new_node;
	return (1);
}
