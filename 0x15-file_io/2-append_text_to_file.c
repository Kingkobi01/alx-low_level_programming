#include "main.h"

/**
 * append_text_to_file - ...
 * @filename : ...
 * @text_content : ...
 * Return: ...
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd != -1)
	{
		if (write(fd, text_content, _strlen(text_content)) == -1)
			return (-1);
	}
	else
		return (-1);

	close(fd);
	return (1);
}

/* /**
 * _strlen - ...
 * @str :...
 * Return: ...
 */

int _strlen(char *str)
{
	int i = 0, count = 0;

	while (str[i])
	{
		count++;
		i++;
	}

	return (count);
}
* /