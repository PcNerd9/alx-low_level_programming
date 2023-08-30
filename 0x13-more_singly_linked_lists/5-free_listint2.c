#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint2 - free all the node in a linked list and set head to NULL
 * @head: a pointer to the address of the head node
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *previous_node, *temp;

	if ((head == NULL) || head == NULL)
		return;
	temp = *head;
	while (temp != NULL)
	{
		previous_node = temp;
		temp = temp->next;
		free(previous_node);
	}
	*head  = NULL;
}
