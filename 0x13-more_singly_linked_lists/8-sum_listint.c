#include "lists.h"

/**
 * sum_listint - returns sum of all data(n) in a list
 * @head: pointer to a list
 *
 * Return: sum and 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
