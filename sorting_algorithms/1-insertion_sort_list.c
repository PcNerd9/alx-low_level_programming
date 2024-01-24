#include "sort.h"
#include <stdio.h>

void insertion_sort_list(listint_t **list)
{
	listint_t *back, *node;

	if (list == NULL || *list == NULL)
		return;
	node = (*list);

	while(node->next)
	{
		back = node;
		node = node->next;
		printf("back->n: %d\n", back->n);
		printf("node->n: %d\n", node->n);
		if (node->n < back->n)
		{
			printf("back->n before changing: %d\n", back->n);
			back->next = node->next;
			node->next->prev = node->prev;
			print_list(*list);
			printf("i enter here\n");
			printf("node->prev after changing: %d\n", back->n);

			while (back->prev != NULL && node->n < back->n)
			{
				if (node->n == 96)
				       printf("node->n : %d < back->n : %d\n\n", node->n, back->n);	

				back = back->prev;
				printf("back->n: %d\n", back->n);
			}
			if (back->prev == NULL)
			{
				node->prev = NULL;
				node->next = back;
				back->prev = node;
				*list = node;
				print_list(*list);
			}
			else
			{
				node->prev = back;
				node->next = back->next;
				back->next = node;
				print_list(*list);
			}

		}
	}


}
