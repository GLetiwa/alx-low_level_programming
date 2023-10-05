#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	int order = 1;
	unsigned long int i;
	hash_node_t *current;

	if (!ht)
		return;
	printf("{");

	/* iterate the array */
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (!order)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			order = 0;
			current = current->next;
		}
	}
	printf("}\n");

}
