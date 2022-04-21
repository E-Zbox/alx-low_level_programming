#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int str_len = strlen(a);
	char str_copy[20];

	strcpy(str_copy, a);

	for (int count = 0; count < n; count++)
	{
		if (count == (str_len - 1))
		{
			printf("%c\n", str_copy[count]);
			break;
		}
		else
		{
			printf("%c, ", str_copy[count]);
		}
	}

}
