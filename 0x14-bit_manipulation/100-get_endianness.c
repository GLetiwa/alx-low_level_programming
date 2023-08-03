#include "main.h"

/**
 * get_endianness - checks the endianness
 */
int get_endianness(void)
{
	unsigned char address = 0x01;

	return (*(char *)&address);
}
