#include "main.h"



/**
 * handle_error - handle an error
 * @exit_code: exit with exit code
 * @error_msg: error message
 * @filename: file name
 * @fd: file descriptor
 * Return: nothing
*/


void handle_error(int exit_code, char *error_msg, char *filename, int fd)
{
	dprintf(STDERR_FILENO, error_msg, filename);

	if (fd != -1)
	{

		close(fd);

	}

	exit(exit_code);
}


/**
 * main - main function
 * @argc: argc number
 * @argv: argments vector
 *
 * Return: 0 on success
*/

int main(int argc, char **argv)
{
	int fd_from, fd_to;
	ssize_t num_read, num_written;
	char buf[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		handle_error(98, "Error: Can't read from file %s\n", argv[1], -1);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		handle_error(99, "Error: Can't write to %s\n", argv[2], fd_from);
	while ((num_read = read(fd_from, buf, BUFFER_SIZE)) > 0)
	{
		num_written = write(fd_to, buf, num_read);
		if (num_written == -1)
			handle_error(99, "Error: Can't write to %s\n", argv[2], fd_from);
		if (num_written != num_read)
			handle_error(99, "Error: Failed to write to %s\n", argv[2], fd_from);
	}
	if (num_read == -1)
		handle_error(98, "Error: Can't read from file %s\n", argv[1], fd_from);
	if (close(fd_from) == -1)
		handle_error(100, "Error: Can't close fd %d\n", argv[1], fd_from);
	if (close(fd_to) == -1)
		handle_error(100, "Error: Can't close fd %d\n", argv[2], fd_to);
	return (0);
}
