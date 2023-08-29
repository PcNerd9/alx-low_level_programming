#include <stdio.h>
#include "lists.h"

/**
 *
 *
 *
 *
 *
 *
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp;
	size_t lenght = 0;

	temp = head;
	do {
		printf("[%p] %d\n", (void *)&(temp->n), temp->n);
		temp = temp->next;
		lenght++;
	} while (temp != head);
	return (lenght);
}
