#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at a given index
 * @head: pointer to a pointer of a list
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeful deletion & -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *prev = *head;
	unsigned int curr_index = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	while (ptr != NULL && curr_index < index)
	{
		prev = ptr;
		ptr = ptr->next;
		curr_index++;
	}
	if (curr_index == index && ptr != NULL)
	{
		prev->next = ptr->next;
		free(ptr);
		return (1);
	}
	else
		return (-1);
}
