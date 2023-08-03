#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian , 1 if little
 */
int get_endianness(void)
{
	unsigned char address = 0x01;

	return (*(char *)&address);
}
