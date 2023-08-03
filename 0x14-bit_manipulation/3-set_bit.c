#include "main.h"

/**
 * set_bit - sets value of a bit in an index to 1
 * @index: index of the bit to be set
 * @n: the number containing the bits
 *
 * Return: 1 if bit is set and -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > 63)
		return (-1);

	bit = 1UL << index;

	*n |= bit;

	return (1);
}
