#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: int pointer
 * @n: int
 * Return: void
 */
void print_array(int *a, int n)
{
	int count;

	while (count < n)
	{
		if (count == n - 1)
		{
			printf("%d\n", *a);
			break;
		}

		printf("%d, ", *a);

		count++;
		a++;
	}
}
