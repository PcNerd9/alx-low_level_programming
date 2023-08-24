#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add a new node to the beginning of the singly lined list
 * @head: a pointer to a pointer pointing to the head of the linked list
 * @str: a pointer to the string to add
 *
 * Return: a pointer to the new head node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int lenght = 0, i;

	for (i = 0; str[i] != '\0'; i++)
		lenght++;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = lenght;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

