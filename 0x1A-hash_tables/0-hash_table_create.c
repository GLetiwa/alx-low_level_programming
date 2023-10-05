#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of the hash table
 *
 * Return: pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);

	new->size = size;

	/* allocating mem for array of pointers */
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (!new->array)
	{
		return (NULL);
	}
	/* initialize each element of the array to NULL */
	for (i = 0; i < size; i++)
	{
		new->array[i] = NULL;
	}
	return (new);
}
