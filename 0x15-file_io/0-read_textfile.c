#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - read a file and write to stdout
 * @filename: then name of the file to read
 * @letters: the size of the byte to read
 *
 * Return: the size of byte read and write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	pid_t fd;
	char *buffer;
	ssize_t byteread;
	ssize_t bytewrite;

	if (filename == NULL)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd <= 0)
		return (0);
	byteread = read(fd, buffer, letters);
	if (byteread <= 0)
		return (0);
	bytewrite = write(STDOUT_FILENO, buffer, byteread);
	if (bytewrite <= 0)
		return (0);
	close(fd);
	free(buffer);
	return (bytewrite);

}
