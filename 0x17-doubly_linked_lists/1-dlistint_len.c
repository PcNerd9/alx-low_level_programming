#include "lists.h"

/**
 * dlistint_len - compute the length of linked list
 * @h: the head of a double linked list
 *
 * Return: the lenght computed
 */
size_t dlistint_len(const dlistint_t *h)
{
	int lenght = 0;
	const dlistint_t *tmp;

	if (h == NULL)
		return (lenght);
	tmp = h;
	while (tmp != NULL)
	{
		lenght++;
		tmp = tmp->next;
	}
	return (lenght);
}
