#include "lists.h"

/**
 * reverse_listint - it reverse the order of the list
 * @head: a pointer to the address of the head node
 *
 * Return: a pointer to the head node of the reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *previous_node, *next_node;

	if (*head == NULL)
		return (NULL);
	previous_node = *head;
	next_node = previous_node->next;
	previous_node->next = NULL;

	while (next_node != NULL)
	{
		temp = next_node->next;
		next_node->next = previous_node;
		previous_node = next_node;
		next_node = temp;
	}
	*head = previous_node;
	return (*head);
}
