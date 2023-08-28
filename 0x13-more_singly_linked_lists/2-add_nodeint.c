#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - add a new node to the beginning of a linked list
 * @head: a pointer to the address  head of the node
 * @n: an integer to store to the node
 *
 * Return: a pointer to the new head node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
