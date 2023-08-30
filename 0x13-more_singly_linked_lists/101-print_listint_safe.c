#include "lists.h"
#include <stdio.h>


size_t print_nodes(const listint_t **head, const listint_t *end);
const listint_t *check_if_list_has_loop(const listint_t *head);

/**
 * print_listint_safe - safely prints all the elements in a list
 * containt loop
 *@head: a pointer to the head node
 *
 *Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *begin_loop, *temp;
	size_t lenght = 0;

	if (head != NULL)
	{
		begin_loop = check_if_list_has_loop(head);
		temp = head;
		do {
			printf("[%p] %d\n", (void *)&temp->n, temp->n);
			temp = temp->next;
			lenght++;
		} while (temp != begin_loop);

		if (begin_loop != NULL)
		{
			do {
				printf("[%p] %d\n", (void *)&temp->n, temp->n);
				temp = temp->next;
				lenght++;
			} while (temp != begin_loop);
			printf("->[%p] %d\n", (void *)&begin_loop->n, begin_loop->n);
		}
	}
	return (lenght);
}

/**
 * check_if_list_has_loop - checks if the list as loop
 * @head: a pointer to the head node
 *
 * Return: the begining of the loop otherwise it return NULL
 */

const listint_t *check_if_list_has_loop(const listint_t *head)
{
	const listint_t *tortise, *hare;
	int contain_loop  = 0;

	if (head == NULL)
		return (NULL);

	tortise = head;
	hare =  head;
	while (hare != NULL && hare->next != NULL)
	{
		hare = (hare->next)->next;
		tortise = tortise->next;
		if (hare == tortise)
		{
			contain_loop = 1;
			break;
	}
	}
	if (contain_loop)
	{
		tortise  = head;
		do {
			tortise = tortise->next;
			hare = hare->next;
		} while (tortise != hare);
		return (hare);
	}
	return (NULL);

}
