#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - copies from file to another
 * @argc: the number of arguments passed
 * @argv: an array of arguments passed
 *
 * Return: 1 on sucess
 */
int main(int argc, char *argv[])
{
	pid_t dest_fd;
	pid_t source_fd;
	char *buffer[1024];
	ssize_t byteread, bytewrite;

	if (argc == 3)
	{
		source_fd = open(argv[1], O_RDONLY);
		if (source_fd <= 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
		if (dest_fd <= 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		while ((byteread = read(source_fd, buffer, 1024)) > 0)
		{
			bytewrite = write(dest_fd, buffer, byteread);
			if (bytewrite <= 0)
			{
				dprintf(STDERR_FILENO, "Error: Can't rite to %s\n", argv[2]);
				exit(99);
			}
		}

	}
	else
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	exit(0);
}
