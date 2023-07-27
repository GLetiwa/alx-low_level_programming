#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node at the end of the list
 * @head: pointer to a pointer to the list
 * @str: string to add in the new node
 * Return: address of the new node, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *ptr = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;

	return (new_node);
}
