#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node at the beginning of a list
 * @head:pointer to a pointer of a list
 * @n: nth value of a list
 *
 * Return: number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	new->next = *head;

	*head = new;

	return (new);
}
