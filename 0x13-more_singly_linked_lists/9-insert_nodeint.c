#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index- inserts node at a given position
 * @idx: index of the new node
 * @head: pointer to a pointer of a list
 * @n: n value of new node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index;
	listint_t *ptr, *tmp, *new, *c_ptr;

	c_ptr = tmp = *head;

	for (index = 0; c_ptr; index++)
		c_ptr = c_ptr->next;

	if (index < idx)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (idx > 0)
	{
		for (index = 0; index < idx; index++)
		{
			ptr = tmp;
			tmp = ptr->next;
		}

		ptr->next = new;
		new->next = tmp;
	}
	else
	{
		*head = new;
		(*head)->next = tmp;
	}
	return (new);
}
