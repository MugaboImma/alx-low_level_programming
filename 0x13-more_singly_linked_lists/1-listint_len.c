#include "lists.h"

/**
 * listint_len -  a function that returns the number of elements
 * in a linked listint_t list
 * Description: returns the num of elements
 * @h: head pointer
 *
 * Return: number of elements
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t num_el = 0;

	while (h != NULL)
	{
		h = h->next;
		num_el++;
	}
	return (num_el);
}
