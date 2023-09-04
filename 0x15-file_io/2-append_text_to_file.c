#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the string to append to the file
 *
 * Return: 1 on success otherwise return -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ren_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	ren_write = write(fd, text_content, strlen(text_content));
	if (ren_write < 0)
		return (-1);
	return (1);
}
