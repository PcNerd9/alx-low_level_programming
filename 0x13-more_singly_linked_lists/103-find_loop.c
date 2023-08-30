#include "lists.h"

/**
 * find_listint_loop - evaluate the begining of a loop in a linked list
 * @head: a pointer to the head of the node
 *
 * Return: the begining loop node otherwise return NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortise, *hare;

	if (head == NULL)
		return (NULL);
	tortise = hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		hare = (hare->next)->next;
		tortise = tortise->next;
		if (hare == tortise)
			break;
	}
	if (hare != NULL)
	{
		tortise = head;
		do {
			tortise = tortise->next;
			hare = hare->next;
		} while (tortise != hare);
	}
	return (hare);
}
