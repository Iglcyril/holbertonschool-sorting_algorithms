#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list by an insertion method.
 * @list: Pointer to the first node of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node_i = *list, *node_j, *prev_node, *prev2x_node, *next_node;

	if (!*list)
		return;
	while (node_i)
	{
		node_j = node_i;
		while (node_j->prev)
		{
			if (node_j->n > node_j->prev->n)
				break;
			prev_node = node_j->prev;
			prev2x_node = prev_node->prev;
			next_node = node_j->next;
			if (!prev2x_node)
			{
				node_j->prev = NULL;
				*list = node_j;
			}
			else
			{
				prev2x_node->next = node_j;
				node_j->prev = prev2x_node;
			}
			if (!next_node)
				prev_node->next = NULL;
			else
			{
				prev_node->next = next_node;
				next_node->prev = prev_node;
			}
			node_j->next = prev_node;
			prev_node->prev = node_j;
			print_list(*list);
		}
		node_i = node_i->next;
	}
}
