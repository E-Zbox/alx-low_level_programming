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
	char c __attribute__((unused));
	int fd __attribute__((unused));
	int bytes __attribute__((unused));
	unsigned int count __attribute__((unused));

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	count = 0;

	while (((bytes = read(fd, &c, sizeof(c))) > 0) && (count < letters))
	{
		write(1, &c, sizeof(c));
		count++;
	}

	close(fd);

	return (count);
}
