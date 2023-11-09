#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new_node;

	if (head == NULL)
		return (NULL);
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	new_node->prev = tmp;
	tmp->next = new_node;
	return (new_node);
}
