#include "main.h"

/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0 on success
*/

int main(int argc, char **argv)
{
int from_fd = 0, to_fd = 0;
ssize_t b;
char buf[BUFFER_SIZE];

if (argc != 3)
dprintf(STDERR_FILENO, USAGE), exit(97);
from_fd = open(argv[1], O_RDONLY);
if (from_fd == -1)
dprintf(STDERR_FILENO, ERR_READNO, argv[1]), exit(98);
to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMS);
if (to_fd == -1)
dprintf(STDERR_FILENO, ERR_WRITENO, argv[2]), exit(99);

while ((b = read(from_fd, buf, BUFFER_SIZE)) > 0)
if (write(to_fd, buf, b) != b)
dprintf(STDERR_FILENO, ERR_WRITENO, argv[2]), exit(99);
if (b == -1)
dprintf(STDERR_FILENO, ERR_READNO, argv[1]), exit(98);

from_fd = close(from_fd);
to_fd = close(to_fd);
if (from_fd)
dprintf(STDERR_FILENO, ERR_CLOSENO, from_fd), exit(100);
if (to_fd)
dprintf(STDERR_FILENO, ERR_CLOSENO, from_fd), exit(100);

return (EXIT_SUCCESS);
}

