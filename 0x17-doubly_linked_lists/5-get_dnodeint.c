#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - get the node at an index in a
 * double linked list
 * @head: the head of the double linked list
 * @index: the index of the node to return
 *
 * Return: a pointer to the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 1;

	tmp = head;
	while (i <= index)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
