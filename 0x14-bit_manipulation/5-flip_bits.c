#include "main.h"

/**
 * flip_bits - counts the number of bits
 * to flip to get one number another
 * @n: number to be flipped
 * @m: number to be flipped
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit, xor_result = n ^ m;
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		bit = xor_result >> i;

		if (bit & 1)
			count++;
	}

	return (count);

}
