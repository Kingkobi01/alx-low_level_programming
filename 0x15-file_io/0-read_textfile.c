#include "main.h"

/**
 * read_textfile - ...
 * @filename : ...
 * @letters : ...
 * Return: ...
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, lettersRead;
	char *buffer = malloc(sizeof(char *) * letters);

	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0600);

	if (fd == -1)
		return (0);

	lettersRead = read(fd, buffer, letters);

	write(STDOUT_FILENO, buffer, lettersRead);

	free(buffer);
	close(fd);
	return (lettersRead);
}
