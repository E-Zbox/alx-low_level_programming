#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: int
 * @argv: char **
 *
 * Return: Always (0)
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int num1 __attribute__((unused));
	int num2 __attribute__((unused));

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		printf("%d\n", num1 * num2);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
