#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: int array pointer
 * @size: int
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int left_diagonal = 0;
	int right_diagonal = 0;

	int index1 = 0;
	int index2 = 0;
	int num;

	printf("%p\n", (void *)a);
	printf("%p => %d\n", (void *)(a + size), *(a + size));

	printf("%d\n", *(a + 3));

	for (; index1 < size; index1++)
	{
		/* summing up right diagonal */
		num = *(a + ((size * (index1 + 1)) - (index1 + 1)));
		right_diagonal += num;

		for (index2 = 0; index2 < size; index2++)
		{
			/* summing up left diagonal */
			if (index1 == index2)
				left_diagonal += *(a + (index1 * size) + index2);
		}
	}

	printf("%d, %d\n", left_diagonal, right_diagonal);
}
