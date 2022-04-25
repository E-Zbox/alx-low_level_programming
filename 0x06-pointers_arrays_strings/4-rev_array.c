#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: int[] pointer
 * @n: int
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int count = 0;
	int array_copy[n];

	for (; count < n; count++)
		array_copy[count] = *(a + count);

	for (count = (n -1); count >= 0; count--)
		*(a + count) = array_copy[n - count -1];

}
