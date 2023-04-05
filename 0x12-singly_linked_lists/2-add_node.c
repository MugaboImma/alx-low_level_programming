#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - A function that adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int l = 0;

	while (str[l])
		l++;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->l = l;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
