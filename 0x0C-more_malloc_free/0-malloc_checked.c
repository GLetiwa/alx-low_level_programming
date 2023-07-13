#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocastes memory using malloc
 * @b: amount of bytes allocated
 *
 * Return: a pointer to memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
