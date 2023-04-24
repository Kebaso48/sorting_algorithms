#include "sort.h"

/**
 * node_swap - swaps two nodes
 * @h: pointer to head of a double linked list
 * @no1: pointer to first node
 * @no2: the second node to swap
 */
void node_swap(listint_t **h, listint_t **no1, listint_t *no2)
{
	(*no1)->next = no2->next;
	if (no2->next != NULL)
		no2->next->prev = *no1;
	no2->prev = (*no1)->prev;
	no2->next = *no1;
	if ((*no1)->prev != NULL)
		(*no1)->prev->next = no2;
	else
		*h = no2;
	(*no1)->prev = no2;
	*no1 = no2->prev;
}

/**
 * insertion_sort_list - uses insertion sorting algo to sort a double linked
 * @list: pointer to the double linked list of integerss
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ins, *itera, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (itera = (*list)->next; itera != NULL; itera = temp)
	{
		temp = itera->next;
		ins = itera->prev;
		while (ins != NULL && itera->n < ins->n)
		{
			node_swap(list, &ins, itera);
			print_list((const listint_t *)*list);
		}
	}
}
