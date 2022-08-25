#include "sort.h"
/**
 * helper - swap
 * @list: list
 * @prenode: prenode
 * @current: current
 */
void helper(listint_t **list, listint_t *prenode, listint_t *current)
{

	prenode->next = current->next;
	current->prev = prenode->prev;
	current->next = prenode;
	prenode->prev = current;
	print_list(*list);
}
/**
 * insertion_sort_list - sort a list using insertion algo
 * @list: list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *current, *prenode;

	if (list == NULL)
		return;

	node = *list;
	while (node != NULL)
	{

		current = node;
		while (node->prev != NULL && node->prev->n > node->n)
		{
			prenode = node->prev;
			if (current->next != NULL)
				current->next->prev = prenode;
			if (prenode->prev != NULL)
				prenode->prev->next = current;
			else
				*list = current;

			helper(list, prenode, current);
		}
		node = node->next;
	}
}
