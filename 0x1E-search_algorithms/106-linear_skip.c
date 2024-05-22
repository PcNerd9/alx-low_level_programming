#include <stdio.h>
#include "search_algos.h"


/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: a pointer to the head of the skip list to search in
 * @value: the value to search for
 *
 * Return: a pointer on the first node where value is located
 * otherwise return NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp = NULL, *before = NULL;

	if (list == NULL)
		return (NULL);
	tmp = list;

	while (tmp->express != NULL && tmp->n < value)
	{
		before = tmp;
		tmp = tmp->express;
		printf("Value checked at index [%ld] = [%d]\n",
				tmp->index, tmp->n);
		if (tmp->n == value)
			return (tmp);
	}
	if (tmp->express == NULL && tmp->n < value)
	{
		before = tmp;
		while (tmp->next != NULL)
			tmp = tmp->next;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			before->index, tmp->index);
	while (before != NULL)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				before->index, before->n);
		if (before->n == value)
			return (before);
		before = before->next;
	}
	return (NULL);
}
