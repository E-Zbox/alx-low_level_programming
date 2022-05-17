#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: int (let's find out)
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args_list;
	int sum = 0;
	unsigned int count;

	va_start(args_list, n);
	for (count = 0; count < n; count++)
		sum += va_arg(args_list, int);

	va_end(args_list);

	return (sum);
}
