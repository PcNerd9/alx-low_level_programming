#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - create file.
 * @filename: the name of the file to create
 * @text_content: the strings to write into the file created
 *
 * Return: 1 on success otherwise return -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, ren_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	ren_write = write(fd, text_content, strlen(text_content));
	if (ren_write < 0)
		return (-1);
	return (1);
}
