#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints opcodes of a function
 * @address: The starting memory address
 * @num_bytes: The number of bytes to print as opcodes
 */
void print_opcodes(unsigned char *address, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", address[i]);
			break;
		}

		printf("%02hhx\n", address[i]);
	}

}

/**
 * main - The main function
 * @argc: The number of command-line arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num_bytes;
	unsigned char *main_address;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_address = (char *)main;

	return (0);
}
