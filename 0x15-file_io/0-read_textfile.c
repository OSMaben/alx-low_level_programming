#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output
 *
 * @filename: the name of the file to read
 * @letters:  is the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
*/


ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t num;
	char file_buffer[BUFFER_SIZE];

	if (!filename || !letters)
		return (0);

	file = open(filename, O_RDONLY);
	num = read(file, file_buffer, letters);
	num = write(STDOUT_FILENO, file_buffer, num);

	if (file == -1 || num == -1)
		return (0);

	close(file);
	return (num);
}

