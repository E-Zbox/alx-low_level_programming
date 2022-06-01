#include "main.h"

/**
 * create_file - creates a file
 * @filename: const char *
 * @text_content: char *
 *
 * Return: int (returns 1 on success, -1 on failure
 * (file cannot be created, file can not be written, write "fails", etc...)
 */
int create_file(const char *filename, char *text_content)
{
	int fd __attribute__((unused));

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd == -1 || text_content == NULL)
		return (-1);

	write(fd, text_content, strlen(text_content));

	close(fd);

	return (1);
}
