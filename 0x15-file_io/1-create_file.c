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
	int opn;
	ssize_t num = 0, length = strlen(text_content);

	if (!filename)
		return (-1);

	opn = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (opn == -1)
		return (-1);
	if (length)
		num = write(opn, text_content, length);
	close(opn);

	if (num == length)
		return (1);
	else
		return (-1);
}
