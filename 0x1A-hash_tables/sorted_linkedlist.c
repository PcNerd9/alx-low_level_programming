#include <stdlib.h>
#include "hash.h"
#include <stdio.h>
#include <string.h>

void sorted_linked_list(shash_table_t *head, shash_node_t *item)
{
	shash_node_t *tmp;

	if (head == NULL)
		return;
	if (head->shead == NULL)
	{
		head->shead = item;
		item->snext = NULL;
		item->sprev = NULL;
		head->stail = item;
		return;
	}
	tmp = head->shead;
	if(tmp->key[0] > item->key[0])
	{
		item->snext = head->shead;
		item->sprev = NULL;
		head->shead->sprev = item;
       		head->shead = item;
		return;
	}
	while (tmp->next != NULL)
	{
		if (item->key[0] < tmp->key[0])
		{
			item->snext = tmp;
			item->sprev = tmp->sprev;
			tmp->sprev->snext = item;
			return;
		}
		tmp = tmp->next;
	}
	item->snext = tmp->snext;
	item->sprev = tmp;
	tmp->snext = item;

	head->stail = item;
	return;
}

void print(linkedlist *head)
{
	linkedlist *tmp;

	if (head == NULL)
		return;
	tmp = head;
	while (tmp != NULL)
	{
		printf("%s\n", tmp->key);
	       tmp = tmp->next;	
	}
}

int main(void)
{
	linkedlist *head;

	head = NULL;
	sorted_linked_list(&head, "the");
	sorted_linked_list(&head, "next");
	sorted_linked_list(&head, "value");
	sorted_linked_list(&head, "pointer");
	sorted_linked_list(&head, "collision");
	sorted_linked_list(&head, "linked");
	sorted_linked_list(&head, "element");
	sorted_linked_list(&head, "char");
	sorted_linked_list(&head, "array");
	sorted_linked_list(&head, "head");
	sorted_linked_list(&head, "unique");
	sorted_linked_list(&head, "sorted");
	sorted_linked_list(&head, "main");
	sorted_linked_list(&head, "a");
	sorted_linked_list(&head, "c");
	sorted_linked_list(&head, "b");
	sorted_linked_list(&head, "e");
	sorted_linked_list(&head, "d");
	sorted_linked_list(&head, "zip");

	print(head);
	return (0);

}
