#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: unsigned long int (base number)
 * @m: unsigned long int (number to transform to)
 *
 * Return: unsigned int (the number of bit transformations needed)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count, result;

	result = 0;

	for (count = 8 * sizeof(n) - 1; count >= 0; count--)
		if (((count ^ m) >> 1) & 1)
			result++;

	return (result);
}
