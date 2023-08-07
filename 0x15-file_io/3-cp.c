#include "main.h"
#include <stdio.h>
#define BUFFER_SIZE 1024

/**
 * main - copies content of a file to another file
 * @argc: number of arguments being passed
 * @argv: parameters of the argument
 *
 * Return: 0 (Sucess)
 */
int main(int argc, char **argv)
{
	const char *file_from = argv[1], *file_to = argv[2];
	int fd_f, fd_t, reads, writes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd_f = open(file_from, O_RDONLY);
	reads = read(fd_f, buffer, 1024);
	if (fd_f == -1 || reads == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_t = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	writes = write(fd_t, buffer, reads);
	if (fd_t == -1 || writes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_f);
		exit(99);
	}
	if (reads > 0)
	{
		close(fd_f);
		close(fd_t);
	}
	if (close(fd_f) == -1 || close(fd_t) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			fd_f == -1 ? fd_f : fd_t);
		exit(100);
	}
	return (0);
}
