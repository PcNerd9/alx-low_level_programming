#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints all the elements in a linked list
 * @h: a pointer to the head node
 *
 *Return: the lenght of number of elements in the linked list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t lenght = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		lenght++;
		temp = temp->next;
	}
	return (lenght);
}
