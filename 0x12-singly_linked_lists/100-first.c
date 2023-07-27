#include <stdio.h>

void printb4_main(void) __attribute__((constructor));

/**
 * printb4_main - prints a sentence before main
 * function is executed
 */

void printb4_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}
