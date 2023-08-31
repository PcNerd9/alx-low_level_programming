#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

size_t _free_listint_safe(listint_t **);

/**
 * _add_node - Add a node at the beginning of a list
 *
 * @head: A pointer to the first element of a list
 * @n: The number to store in the new node
 *
 * Return: The address of the new node
 */
listint_t *_add_node(listint_t **head, int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(*tmp));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *node;
	size_t n;
	int values[150] = {
		919955, -221576, -859826, -673092, -227441, -274387, -436509, -877540, -312324, -132610, -451068, -634665, 265754, 680646, -103124, 455298, -674129, -505322, -480779, -976755, -61049, 752586, -780309, -225601, 545574, 967894, -952912, -710816, -464807, -83928, -144352, 272984, -103436, -469044, 727842, -471465, 632218, 484071, 164176, -888075, 375238, -368407, -126852, 747849, -444324, -508919, 212726, 921259, 145606, -168736, 482175, 417315, -144374, 766661, 459419, -971797, 614621, 395332, 382023, 937524, 281705, 106337, 588634, 914645, 904202, 123836, -912500, -937165, 904917, 514808, -429722, 364031, 4549, 849042, -130394, -678079, 866332, 290840, -398001, 894631, -843992, 650923, 759358, -173141, -814339, 102554, -152928, -384918, -694858, -909105, 758674, -903057, 995532, -473530, 170832, -283768, 202502, -77236, -828210, -5871, 751590, 617269, -113835, -424265, 885113, -228101, 348995, -597740, 488342, 178172, 636416, -115361, 349580, 598603, 463378, -892583, -426662, 246129, -831511, -287468, 694342, -935414, 230693, 22105, -803356, -739612, -134577, -702335, -952953, 825327, -199434, 162758, -725024, 554175, 644023, -983839, -931458, -825615, -121051, -2142, 331891, -330280, 547907, -626812, 107124, -140852, 862279, -694146, 775690, -98861
	};
	int i;

	head = NULL;
	node = _add_node(&head, values[0]);
	for (i = 1; i < 120; ++i)
	{
		_add_node(&head, values[i]);
	}
	node->next = _add_node(&head, values[i]);
	for (i = i + 1; i < 150; ++i)
	{
		_add_node(&head, values[i]);
	}
	n = print_listint_safe(head);
	printf("%lu\n", n);
	free_listint_safe(&head);
	return (0);
}
