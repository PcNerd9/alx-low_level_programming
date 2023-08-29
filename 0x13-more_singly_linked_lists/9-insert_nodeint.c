#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a new node at a particular index
 * @head: a pointer to the address of the head node
 * @idx: the index to add the new node
 * @n: the integer to store in the new node
 *
 * Return: the head node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode, *previous_node;
	unsigned int i, lenght = 0;

	temp = *head;
	while (temp != NULL)
	{
		lenght++;
		temp = temp->next;
	}
	if (lenght < idx)
		return (NULL);
	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (*head == NULL && idx == 0)
	{
		*head = newnode;
		newnode->next = NULL;
	}
	else if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else if (*head == NULL)
		return (NULL);

	temp = *head;
	for (i = 0; i < idx; i++)
	{
		previous_node = temp;
		temp = temp->next;
	}

	newnode->next = temp;
	previous_node->next = newnode;
	return (*head);
}
