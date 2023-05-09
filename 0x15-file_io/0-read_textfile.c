#include "main.h"


/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output
 *
 * @filename: the name of the file to read
 * @letters:  is the number of letters it should read and print
 *
 * Return:actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, wrt, rd;
	char *file_buffer;

	if (filename == NULL)
		return (0);
	file_buffer = malloc(sizeof(char) * letters);
	if (file_buffer == NULL)
	{
		return (0);
	}
	opn = open(filename, O_RDONLY);
	rd = read(opn, file_buffer, letters);
	wrt = write(STDOUT_FILENO, file_buffer, letters);

	if (opn == -1 || wrt == -1 || rd == -1
		return (0);

	close(opn);
	free(file_buffer);

	return (wrt);
}
