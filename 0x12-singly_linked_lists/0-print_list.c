#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all the elements in a singly linked list
 * @h: a pointer to the head of the singly linked list
 *
 *Return: the total number of elements in a list
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
		count++;
	}
	return (count);
}
