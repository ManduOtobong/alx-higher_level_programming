#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Check if a singly-linked list contains a cycle.
 * @list: A singly-linked list
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */
int check_cycle(listint_t *list)
{
	listint_t *turt, *hare;

	if (list == NULL || list->next == NULL)
		return (0);

	turt = list->next;
	hare = list->next->next;

	while (turt && hare && hare->next)
	{
		if (turt == hare)
			return (1);

		turt = turt->next;
		hare = hare->next->next;
	}

	return (0);
}
