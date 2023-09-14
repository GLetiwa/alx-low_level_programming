#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node at the end of a linked list
 * @head: pointer to the head of a linked list
 * @n: value of the node
 *
 * Return: address of the new node or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *p;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	p = *head;

	if (p)
	{
		while (p->next)
			p = p->next;
		p->next = new;

	}
	else
		*head = new;
	new->prev = p;
	return (new);
}
