#include "main.h"

/**
 * print_number - prints an integer
 * @n: int
 *
 * Return: void
 */
void print_number(int n)
{
	int count = 0;

	int n_copy = n;

	while (n != 0)
	{
		n /= 10;
		count++;
	}

	char char_array[count];

	n = n_copy;
	
	while (n != 0)
	{
		char_array[count] = n % 10;
		n /= 10;
		count--;
	}

	n = n_copy;

	count = 0;

	
}
