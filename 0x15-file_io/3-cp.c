#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>


/**
 * main - copies the content of a file to another
 * @agc: the number of arguments passed
 * @argv: a pointer to the strings passed
 *
 * Return: the exit code
 */

int main(int agc, char **argv)
{
	int fd_from, fd_to, byte_to_read, ren_write, from_close, to_close;
	char buffer[1024];

	if (agc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (argv[1] == NULL || argv[2] == NULL)
		exit(100);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(2, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_APPEND | O_CREAT | O_TRUNC, 0664);
	if (fd_to < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}
	do {
		byte_to_read = read(fd_from, buffer, 1024);
		if (byte_to_read < 0)
		{
			dprintf(2, "Error: Cant read from %s\n", argv[1]);
			close(fd_from);
			close(fd_to);
			exit(98);
		}
		ren_write = write(fd_to, buffer, byte_to_read);
		if (ren_write < 0)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	} while (byte_to_read);
	from_close = close(fd_from);
	to_close = close(fd_to);
	if (from_close < 0)
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
	if (to_close < 0)
		dprintf(2, "Error: Can't close rd %d\n", fd_to);
	exit(0);
}
