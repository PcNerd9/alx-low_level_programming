#include "lists.h"
#include <stddef.h>

/**
 * listintt_len  - compute the total number of elements in a list
 * @h: a pointer to the head node
 *
 * Return: the total lenght
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t lenght = 0;

	temp = h;
	while (temp != NULL)
	{
		lenght++;
		temp = temp->next;
	}
	return (lenght);
}
