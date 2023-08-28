#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free all the nodes in a linked list
 * @head: a pointer to the head node
 *
 * Return: nothing
  */

void free_listint(listint_t *head)
{
	listint_t *temp, *previous_node;

	if (head == NULL)
		return;
	temp = head;
	while (temp != NULL)
	{
		previous_node = temp;
		temp = temp->next;
		free(previous_node);
	}
}
