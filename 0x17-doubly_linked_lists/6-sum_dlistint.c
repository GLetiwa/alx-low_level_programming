#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the data in the linked list
 * @head: pointer to the head of a linked list
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head->prev)
		head = head->prev;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
