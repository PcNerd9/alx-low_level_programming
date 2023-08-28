#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete a node at a particular index
 * @head: a pointer to the head node
 * @index: the index of the node the delete
 *
 * Return: 1 if succeeded, else return -1
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous_node, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			if (temp == NULL && (i < (index - 1)))
				return (-1);
			previous_node = temp;
			temp = temp->next;
		}
		previous_node->next = temp->next;
	}
	free(temp);
	return (1);
}
