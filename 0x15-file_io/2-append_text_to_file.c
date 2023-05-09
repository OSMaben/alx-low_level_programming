#include "main.h"

/**
 * append_text_to_file -  a function that appends text at the end of a file.
 *
 * @filename: the name of the file to read
 * @text_content:the content of the file
 *
 * Return:1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{

	int opn;


	ssize_t num = 0, len = strlen(text_content);


	if (!filename)

		return (-1);

	opn = open(filename, O_WRONLY | O_APPEND);

	if (opn == -1)

		return (-1);

	if (len)

		num = write(opn, text_content, len);

	close(opn);

	return (num == len ? 1 : -1);
}
