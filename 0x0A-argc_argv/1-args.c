#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc - int
 * @argv - char **
 *
 * Return: Always (0)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d", argc - 1);

	return (0);
}
