#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a list
 * @head: pointer to a pointer to a list
 * @index: indexof the node, starting at 0
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int curr_index = 0;

	while (head != NULL && curr_index < index)
	{
		head = head->next;
		curr_index++;
	}

	if (curr_index == index)
		return (head);
	else
		return (0);

}
