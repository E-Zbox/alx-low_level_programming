#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, follwed by a new line
 * @separator: const char *
 * @n: const unsigned int
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	va_list args_list;

	va_start(args_list, n);
	for (; count < n; count++)
	{
		printf("%d", va_arg(args_list, int));
		if (separator && count < (n - 1))
			printf("%s", separator);
	}

	va_end(args_list);
	printf("\n");
}
