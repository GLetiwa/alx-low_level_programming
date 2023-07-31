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
	unsigned int index = 0;

	listint_t *ptr = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (index == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (index < idx - 1 && ptr != NULL)
	{
		ptr = ptr->next;
		index++;
	}
	if (index == idx - 1 && ptr != NULL)
	{
		new->next = ptr->next;
		ptr->next = new;
		return (new);
	}
	else
	{
		free(new);
		return (NULL);
	}

	return (new);
}
