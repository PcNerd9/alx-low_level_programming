#include "list.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of
 * a double linked list
 * @head: a pointer to the head of the double linked list
 * @index: the index of the node to delete
 *
 * Return: 1 on success otherwise return -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *prev, *next;
	unsigned int i = 1;

	if (head == NULL)
		return (-1);
	tmp = *head;
	while (i < index)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	if (tmp->next == NULL)
	{
		prev = tmp->next;
		prev->next = NULL;
		free(tmp);
		return (1);
	}
	prev = tmp->prev;
	next = tmp->next;
	prev->next = next;
	next->prev = prev;
	free(tmp);
	return (1);
}
