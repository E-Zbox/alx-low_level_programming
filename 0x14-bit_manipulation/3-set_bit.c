#include "main.h"

/**
 * set_bit - sets bit at index to 1
 * @n: int * (pointer to number)
 * @index: int (index, starting from 0 of the bit you want to set)
 *
 * Return: int (1 if it worked, or -1 if an error occurred)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
