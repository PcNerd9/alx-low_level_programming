#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - add a new node to the end of the linked list
 * @head: a pointer to a pointer that points to the beginning of the list
 * @str: a pointer to the string
 *
 * Return: the linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new_node;
	unsigned int lenght = 0, i;

	for (i = 0; str[i] != '\0'; i++)
		lenght++;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = lenght;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = new_node;
	}
	return (*head);
}
