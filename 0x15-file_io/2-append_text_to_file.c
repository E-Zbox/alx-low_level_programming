#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: const char *
 * @text_content: char *
 *
 * Return: int (return 1 if the file exist and
 * -1 if the file does not exist or you do not have
 *  required permissions to write the file)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd __attribute__((unused));

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	write(fd, text_content, strlen(text_content));

	return (1);
}
