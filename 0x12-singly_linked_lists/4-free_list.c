#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free all the nodes in singly linked list
 * @head: a pointer to the head of the singly linked list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp, *pre_node;

	temp = head;

	while (temp != NULL)
	{
		pre_node = temp;
		temp = temp->next;
		free(pre_node->str);
		free(pre_node);
	}
}
