#include <stdlib.h>
#include "lists.h"

/**
 * check_list_has_loop - checks if a list has a loop
 * @h: a pointer to the head node
 *
 * Return: a pointer to the begining of the loop other wise return NULL
 */
listint_t *check_list_has_loop(listint_t *h)
{
	listint_t *tortise, *hare;

	if (h == NULL)
	{
		return (NULL);
	}
	tortise = h;
	hare = h;

	while (hare != NULL)
	{
		hare = (hare->next)->next;
		tortise = tortise->next;
		if (hare == tortise)
			break;
	}
	if (hare != NULL)
	{
		tortise = h;
		do {
			hare = hare->next;
			tortise = tortise->next;
		} while (hare != tortise);
	}
	return (hare);
}

/**
 * free_listint_safe - free all the nodes in a list wit loop
 * @h: a pointer to the head node
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *previous_node, *tmp, *begin_loop;
	size_t lenght = 0;

	if (*h == NULL || h == NULL)
		return (lenght);
	tmp = *h;
	begin_loop = check_list_has_loop(*h);
	while (tmp != begin_loop)
	{
		previous_node = tmp;
		tmp = tmp->next;
		free(previous_node);
		lenght++;
	}
	if (begin_loop)
	{
		do {
			previous_node = tmp;
			tmp = tmp->next;
			free(previous_node);
			lenght++;
		} while (tmp != begin_loop);
	}
	*h = NULL;
	return (lenght);
}
