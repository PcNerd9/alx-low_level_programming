#include "lists.h"

/**
 * sum_listint - compute the sum of all the elements in a linked list
 * @head: a pointer to the head node
 *
 * Return: the sum computed
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
