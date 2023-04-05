#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: head of link list mode
 *
 * Return:number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t el_list = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		el_list++;
	}
	return (el_list);
}
