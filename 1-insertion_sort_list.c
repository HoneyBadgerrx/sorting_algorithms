#include "sort.h"

/**
 * insertion_sort_list application of insertion sort to linked list
 * @list: pointer to linked list head
 * Return: Null
 */
void insertion_sort_list(listint_t **list)
{
	list_int *p;

	if (list == NULL || *list == NULL)
		return;
	p = *list;

	while (p)
	{
		p = p->next;
		if (p->n > p->prev->n)
		{
			while (p && p->n > p->prev->n)
			{
				p




	}
