#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc - int
 * @argv - char **
 *
 * Return: Always (0)
 */
int main(int argc, int **argv __attribute__((unused)))
{
	printf("%d", argc);

	return (0);
}
