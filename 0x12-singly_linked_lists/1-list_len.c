#include "lists.h"

/**
 * list_len - compute the total number of elements in the singly linked list
 * @h: a pointer to the head of the singly linked list
 *
 * Return: the number of number of elements computed
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
