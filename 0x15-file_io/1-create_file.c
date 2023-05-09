#include "main.h"

/**
 * create_file - a function that creates a file.
 *
 * @filename: the name of the file to read
 * @text_content:the content of the file
 *
 * Return:1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		size_t length = strlen(text_content);
		ssize_t bytes_written = write(fd, text_content, length);

		if (bytes_written == -1 || bytes_written != (ssize_t)length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
