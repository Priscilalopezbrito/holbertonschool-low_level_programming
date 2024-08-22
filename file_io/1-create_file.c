#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file- create file
 * @filename: filaname
 * @text_content: text content
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_written;
	size_t len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		n_written = write(fd, text_content, len);
		if (n_written == -1 || (size_t)n_written != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

