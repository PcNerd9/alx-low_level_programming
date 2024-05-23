#include <stdio.h>
#include <math.h>
#include "search_algos.h"


/**
 * jump_list - searches for a value in a sorted of integers
 * using the jump search algorithm
 * @list: a pointer to the head of the list to search in
 * @size: the number of the nodes in the list
 * @value: the value to search for
 *
 * Return: a pointer to the first node where value is located
 * otherwise return NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *tmp, *before;
	size_t jump = 0, i = 0;

	if (list == NULL)
		return (NULL);
	jump = sqrt(size);
	if (jump == 0)
		return (NULL);
	tmp = list;
	if (tmp->n == value)
		return (tmp);
	while (tmp != NULL)
	{
		before = tmp;
		for (i = 0; i < jump; i++)
		{
			if (tmp->next == NULL)
				break;
			tmp = tmp->next;
		}
		if (tmp->next == NULL)
		{
			printf("Value checked at index [%ld] = [%d]\n",
					tmp->index, tmp->n);
			break;
		}
		printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
		if (tmp->n >= value)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			before->index, tmp->index);
	while (before != NULL)
	{
		printf("Value checked at index [%ld] = [%d]\n", before->index, before->n);
		if (before->n == value)
			return (before);
		before = before->next;
	}
	return (NULL);
}
