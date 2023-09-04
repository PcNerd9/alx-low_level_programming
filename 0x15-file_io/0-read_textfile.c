#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include "main.h"

/**
 * read_textfile - reads a text file and print it to the standard output
 * @filename: the path or the name of the file to be opened
 * @letters: the number of bytes to read
 *
 * Return: the size of the bytes read
 */

size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t lenght = 0;
	int ren_write, byte_read = 0;
	char buffer[1024];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	if (letters > 1024)
	{
		while (letters > 1024)
		{
			byte_read = read(fd, buffer, 1024);
			ren_write = write(STDOUT_FILENO, buffer, byte_read);
			if (ren_write <= 0)
			{
				close(fd);
				return (0);
			}
			letters -= 1024;
			lenght += byte_read;

		}
	}
	 byte_read = read(fd, buffer, letters);
	ren_write = write(STDOUT_FILENO, buffer, byte_read);
	if (ren_write < 0)
	{
		close(fd);
		return (0);
	}
	lenght += byte_read;
	close(fd);
	return (lenght);

}
