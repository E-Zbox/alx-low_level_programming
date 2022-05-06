#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: int
 * @argv: char **
 *
 * Return: Always (0)
 */
int main(int argc, char **argv)
{
	int result, count, num;

	result = 0;
	count = 1;

	for (; count < argc; count++)
	{
		num = atoi(argv[count]);
		if (num == 0)
		{
			printf("Error\n");
			return (1);
		}

		result += num;
	}

	printf("%d\n", result);

	return (0);
}
