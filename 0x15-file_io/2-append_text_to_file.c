#include "main.h"

/**
 * _strlen - return the length
 * @s: the string
 * Return: integer
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - appends text to file
 * @filename: name of file
 * @text_content: text to write
 * Return: 1 at success
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_contet, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
