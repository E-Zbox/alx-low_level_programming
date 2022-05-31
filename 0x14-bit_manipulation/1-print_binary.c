#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, flag;

	if (n == 0)
		_putchar('0');

	for (flag = 0, i = sizeof(n) * 8 -1; i >= 0; i--)
	{
		if ((n >> i) & 1)
			flag = 1;

		if (flag == 1)
			((n >> i) & 1) ? _putchar('1') : _putchar('0');
	}

	/**
	int max = 4;
	int binary;

	while (max >= 0)
	{
		binary = max & n;

		if (binary == 1)
			_putchar('1');
		else
			_putchar('0');

		max = max >> 1;
	}
	*/
}
