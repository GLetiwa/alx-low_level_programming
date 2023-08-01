#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a linked list
 * can print with a loop
 * @head: pointer to the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t *ptr = (listint_t *)head;
	const listint_t *current = NULL;
	const listint_t *arr[1024];

	while (ptr)
	{
		unsigned int i;

		for (i = 0; i < count; i++)
		{
			if (arr[i] == ptr)
			{
				current = ptr;
				break;
			}
		}
		if (current != NULL)
			break;
		arr[count] = ptr;
		count++;

		printf("[%p] %d\n", (void *)ptr, ptr->n);
		ptr = ptr->next;

	}

	if (current != NULL)
	{
		printf("-> [%p] %d\n", (void *)current, current->n);
		exit(98);
	}

	return (count);
}
