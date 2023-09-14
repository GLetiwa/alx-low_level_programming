#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at a given index
 * @head: pointer to the head of the linked list
 * @index: index of the node
 * Return: nth node or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (!head)
		return (NULL);
	tmp = head;
	while (tmp)
	{
		if (index == size)
			return (tmp);
		size++;
		tmp = tmp->next;
	}
	return (NULL);
}
