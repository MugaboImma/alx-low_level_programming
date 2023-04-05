#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - The function that adds new node at the end of linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *m = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (m->next)
		m = m->next;

	m->next = n;
	return (n);
}
