#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert a node at a index
 * @h: a pointer to the head of the list
 * @idx: the index to addthe node
 * @n: the number to add
 *
 * Return: the new node add
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new_node;
	unsigned int i = 1;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	tmp = *h;
	while (i < idx)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	if (tmp->next == NULL)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = tmp->next;
	new_node->prev = tmp;
	tmp->next = new_node;
	return (new_node);
}
