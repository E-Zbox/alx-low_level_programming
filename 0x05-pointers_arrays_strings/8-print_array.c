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
	int count = 0;

	if (n > 0)
	{
		while (count < n)
		{
			if (count == n - 1)
			{
				printf("%d", *a);
				break;
			}

			printf("%d, ", *a);

			count++;
			a++;
		}
	}

	putchar('\n');

}
