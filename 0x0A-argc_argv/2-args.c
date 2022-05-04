#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: int
 * @argv: char **
 *
 * Return: Always (0)
 */
int main(int argc, char **argv)
{
	int index = 1;

	for (; index < argc; index++)
		printf("%s\n", argv[index]);

	return (0);
}
