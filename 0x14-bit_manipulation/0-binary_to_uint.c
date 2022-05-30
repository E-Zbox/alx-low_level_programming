#include "main.h"

/**
 * _exp - raises the base number to the power
 * @base: int
 * @power: int
 *
 * Return: int
 */
int _exp(int base, unsigned int power)
{
	unsigned int count = 0, result = 1;

	for (; count < power; count++)
		result *= base;

	return (result);
}

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: char *(pointing to a string of 0 and 1 chars
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len_b = 0, num;
	unsigned int index = 0, result = 0;

	if (b == NULL)
		return (0);

	while (*(b + len_b))
		len_b++;

	--len_b;

	while (index <= len_b)
	{
		num = *(b + index) - '0';

		if (num != 0 && num != 1)
			return (0);

		result += num * _exp(2, len_b - index);
		index++;
	}

	return (result);
}
