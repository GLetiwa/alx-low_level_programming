#include "hash_tables.h"
/**
 * key_index - gets the index of a key
 * @key: key input
 * @size: size of hash table array
 *
 * Return: index at which key/value is stored
 */
unsigned long int key_index(const unsigned char *key,
		unsigned long int size)
{
	unsigned long int value, index;

	value = hash_djb2(key);
	/* calculate index based on value and table size */
	index = value % size;

	return (index);
}
