#include <stdio.h>

/**
 * main - prints program name, followed by a new line
 * @argc: int
 * @argv: char **
 *
 * Return: Always (0)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
