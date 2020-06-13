#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * insertion_sort_list - tri sorts a doubly linked list
 *
 * @list: doubly linked list
 *
 */
void insertion_sort_list(listint_t **list)
{


	listint_t *curr, *n1, *n2;

	if (list == NULL || *list == NULL)
		return;
	if ((*list)->next == NULL)
		return;

	curr = (*list)->next;
	while (curr)
	{
		while ((curr->prev) && (curr->prev)->n > curr->n)
		{



			n1 = (curr->prev)->prev;
			n2 = curr->next;
			curr->next = curr->prev;
			(curr->prev)->prev = curr;
			curr->prev = n1;
			if (!n1)
				*list = curr;
			else
				n1->next = curr;
			(curr->next)->next = n2;
			if (n2)
				n2->prev = curr->next;
			print_list(*list);
		}
		curr = curr->next;

	}

}
