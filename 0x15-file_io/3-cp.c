#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *make_buffer(char *buff);
void close_file(int fd);

/**
 * make_buffer - allocates a buffer size of 1024
 * @buff: name of the storage buffer
 *
 * Return: pointer to the newly allocated buffer
 */
char *make_buffer(char *buff)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", buff);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes file descriptors
 * @fd: descriptors to be closed
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies content of a file to another file
 * @argc: number of arguments being passed
 * @argv: parameters of the argument
 *
 * Return: 0 (Sucess)
 */
int main(int argc, char **argv)
{
	int fd_f, fd_t, reads, writes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = make_buffer(argv[2]);
	fd_f = open(argv[1], O_RDONLY);
	reads = read(fd_f, buffer, 1024);
	fd_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fd_f == -1 || reads == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		writes = write(fd_t, buffer, reads);
		if (fd_t == -1 || writes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		reads = read(fd_f, buffer, 1024);
		fd_t = open(argv[2], O_WRONLY | O_APPEND);

	} while (reads > 0);

	free(buffer);
	close_file(fd_f);
	close_file(fd_t);

	return (0);
}
