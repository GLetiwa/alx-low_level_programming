#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 in a given index
 * @index: position of the bit to be set to 0
 * @n: number containing the bits
 *
 * Return: 1 if successful and -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > 63)
		return (-1);

	bit = 1UL << index;

	*n &= ~bit;

	return (1);
}
