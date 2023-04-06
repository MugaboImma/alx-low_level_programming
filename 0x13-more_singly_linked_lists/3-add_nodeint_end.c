#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - A function that adds new node at the
 * end of a listint_t list
 * @head: double pointer
 * @n : integer to add the list
 *
 * Return: NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *s;
	listint_t *m;

	if (head == NULL)
		return (NULL);
	s = malloc(sizeof(listint_t));
	if (s == NULL)
		return (NULL);
	s->n = n;
	s->next = NULL;

	if (head == NULL)
	{
		*head = s;
		return (s);

	}
	m = *head;
	while (m->next != NULL)
	{
		m = m->next;
	}
	m->next = s;
	return (s);

}
