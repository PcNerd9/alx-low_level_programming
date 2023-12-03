#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - create a sorted hash table
 * @size: the size of the table
 *
 * Return: the table create
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = (shash_table_t *)malloc(sizeof(shash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;
	table->array = (shash_node_t **)malloc(sizeof(shash_node_t) * size);
	if (!(table->array))
		return (NULL);
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	return (table);
}

/**
 * create_item - create a new node to add to the hash table
 * @key: the key of the node
 * @value: the value of the node
 *
 * Return: the new node created
 */
shash_node_t *create_item(const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = (shash_node_t *)malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = (char *)malloc(sizeof(char) * strlen(key) + 1);
	strcpy(new_node->key, key);
	new_node->value = (char *)malloc(sizeof(char) * strlen(value) + 1);
	strcpy(new_node->value, value);
	new_node->next = NULL;
	new_node->snext = NULL;
	new_node->sprev = NULL;
	return (new_node);
}
/**
 * sorted_linked_list - saves a node into a linked list
 * in an alphabetical order
 * @head: a head pointer to the linked list
 * @item: a pointer to the node to add
 *
 * Return: nothing
 */
void sorted_linked_list(shash_table_t *head, shash_node_t *item)
{
	shash_node_t *tmp;

	if (head == NULL)
		return;
	if (head->shead == NULL)
	{
		head->shead = item;
		item->snext = NULL;
		item->sprev = NULL;
		head->stail = item;
		return;
	}
	tmp = head->shead;
	if (tmp->key[0] > item->key[0])
	{
		item->snext = head->shead;
		item->sprev = NULL;
		head->shead->sprev = item;
		head->shead = item;
		return;
	}
	while (tmp->snext != NULL)
	{
		if (item->key[0] < tmp->key[0])
		{
			item->snext = tmp;
			item->sprev = tmp->sprev;
			tmp->sprev->snext = item;
			return;
		}
		tmp = tmp->snext;
	}
	item->snext = tmp->snext;
	item->sprev = tmp;
	tmp->snext = item;

	head->stail = item;
}

/**
 * shash_table_set - add a new node to the hash table
 * @ht: a pointer to the hash table
 * @key: the key of the new node
 * @value: the value of the new node
 *
 * Return: 1 on success otherwise return 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current_node;

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
		sorted_linked_list(ht, new_node);
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
	sorted_linked_list(ht, new_node);
	return (1);
}

/**
 * shash_table_get - retreive the value corresponding to the key
 * @ht: the hash table
 * @key: the key to retreive
 *
 * Return: the corresponding value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL)
		return (NULL);
	if (key == NULL || strcmp(key, "") == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
		return (NULL);
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}


/**
 * shash_table_print - print all the content in the hash table
 * in form of dictionary in python
 * @ht: a pointer to the hash table
 *
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp, *inner_tmp;
	unsigned long int j = 0;

	if (ht == NULL)
		return;
	tmp = ht->shead;
	printf("{");
	while (tmp != NULL)
	{
		if (j != 0)
			printf(", ");
		j++;
		printf("'%s': '%s'", tmp->key, tmp->value);
		if (tmp->next != NULL)
		{
			inner_tmp = tmp->next;
			while (inner_tmp)
			{
				printf(", ");
				printf("'%s': '%s'", inner_tmp->key, inner_tmp->value);
				inner_tmp = inner_tmp->next;
			}
		}
		tmp = tmp->snext;
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - print all the content in the hash table
 * in form of dictionary in python
 * @ht: a pointer to the hash table
 *
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp, *inner_tmp;
	unsigned long int j = 0;

	if (ht == NULL)
		return;
	tmp = ht->stail;
	printf("{");
	while (tmp != NULL)
	{
		if (j != 0)
			printf(", ");
		j++;
		printf("'%s': '%s'", tmp->key, tmp->value);
		if (tmp->next != NULL)
		{
			inner_tmp = tmp->next;
			while (inner_tmp)
			{
				printf(", ");
				printf("'%s': '%s'", inner_tmp->key, inner_tmp->value);
			inner_tmp = inner_tmp->next;
			}
		}
		tmp = tmp->sprev;
	}
	printf("}\n");
}


/**
 * shash_table_delete - delete a hash table
 * @ht: a pointer to the head of the hash table
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t **tmp, *prev, *current;

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
	free(tmp);
	free(ht);
}
