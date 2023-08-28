#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of the linked list
 * @head: a pointer to the address of the head node
 * @n: the integer to store in the new node
 *
 * Return: a pointer to the head node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (*head);
}
