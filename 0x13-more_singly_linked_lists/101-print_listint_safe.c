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
	const listint_t *ptr, *ptr2;

	ptr = head;
	ptr2 = head;

	while (ptr && ptr2 && ptr2->next)
	{
		ptr = ptr->next;
		ptr2 = ptr2->next->next;
		count++;
		
		
		printf("[%p] %d\n", (void *)ptr,  ptr->n);
		

		if (ptr == ptr2)
		{
			printf("->[%p] %d\n", (void *)ptr, ptr->n);
			exit(98);
		}


	}

	return (count);
}
