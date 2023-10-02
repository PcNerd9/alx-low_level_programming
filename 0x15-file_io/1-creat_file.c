#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * _strlen - compute the lenght of the string
 * @string: the lenght 0f the string
 *
 * Return: the lenght of the string
 */
int _strlen(char *string)
{
	int lenght = 0;

	while (*string != '\0')
	{
		lenght++;
		string++;
	}
	return (lenght);
}

/**
 * create_file - create a new file or write to an existing file
 * @filename: the name of the file
 * @text_content: the content to write to the file
 *
 * Return: 1 on success otherwise return -1
 */

int create_file(const char *filename, char *text_content)
{
	pid_t fd;
	ssize_t bytewrite;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd <= 0)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bytewrite = write(fd, text_content, _strlen(text_content));
		if (bytewrite <= 0)
		{
			 close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
