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
	int opn, wrt, length = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (length == 0)
		{
			length++;

		}

	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	wrt = write(opn, text_content, length);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);

	return (1);
}
