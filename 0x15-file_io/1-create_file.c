#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_file - function creates a file with given permissions
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 0n success, -1 of failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, writes;

	if (filename == NULL)
		return (-1);


	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writes = write(fd, text_content, len);

	if (fd == -1 || writes == -1)
		return (-1);

	close(fd);

	return (1);
}
