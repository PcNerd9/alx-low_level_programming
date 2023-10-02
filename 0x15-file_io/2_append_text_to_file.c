#include <unistd.h>
#include <fcntl.h>

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
int append_text_to_file(const char *filename, char *text_content)
{
	pid_t fd, is_exit;
	ssize_t bytewrite;

	if (filename == NULL)
		return (-1);
	is_exit = open(filename, O_RDONLY);
	if (is_exit >= 0)
	{
		close(is_exit);
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd <= 0)
		{
			return (-1);
		}
		if (text_content == NULL)
		{
			close(fd);
			return (1);
		}
		bytewrite = write(fd, text_content, _strlen(text_content));
		if (bytewrite <= 0)
		{
			close(fd);
			return (-1);
		}
		return (1);
	}
	if (text_content == NULL)
		return (-1);
	return (1);

}
