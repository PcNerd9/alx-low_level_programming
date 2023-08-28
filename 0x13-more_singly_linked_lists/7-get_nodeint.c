#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - get a node at a particular index in a linked list
 * @head: a pointer to the head node
 * @index: the index of node to get
 *
 * Return: the node at the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	temp = head;
	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
