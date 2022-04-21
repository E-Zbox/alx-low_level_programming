#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int arrayLength = sizeof(a) / 4;

	for (int count = 0; count < n; count++)
	{
		if (count == n - 1)
		{
			printf("%c\n", *(a + count));
			break;
		}

		printf("%c, ", *a[count]);
	}
}
