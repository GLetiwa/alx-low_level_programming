#include "hash_tables.h"
/**
 * hash_table_get - retrieves value associated with a key
 * @ht: pointer to the hash table
 * @key: the key to retrieve value from
 *
 * Return: value of the key or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL); /* key not found */
}
