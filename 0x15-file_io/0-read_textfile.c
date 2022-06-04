#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: const char *
 * @letters: size_t
 *
 * Return: ssize_t (returns the actual number of letters
 * it could read and print)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf __attribute__((unused));
	int fd __attribute__((unused));
	int read_count, write_count;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	read_count = read(fd, buf, letters);

	if (read_count == -1)
	{
		free(buf);
		return (0);
	}

	write_count = write(1, buf, read_count);

	if (write_count == -1 || read_count != write_count)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (write_count);
}
