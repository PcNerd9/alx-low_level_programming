#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a double linked list
 * @head: the head of the linked list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
