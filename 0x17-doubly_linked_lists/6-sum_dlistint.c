#include "lists.h"

/**
 * sum_dlistint - compute the sum of all the data
 * (n) of a double linked list
 * @head: the head of the double linked list
 *
 * Return: the sum computed
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
