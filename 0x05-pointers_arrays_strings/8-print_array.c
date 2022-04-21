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
	int count;

	while (count < n)
	{
		if (count == n - 1)
		{
			printf("%c\n", *a);
			break;
		}

		printf("%c, ", *a);

		count++;
		*a++
	}
}
