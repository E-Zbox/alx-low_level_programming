#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: char * (separator is the string to be printed between the strings)
 * @n: unsigned int (number of strings passed to the function)
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args_list;
	unsigned int count = 0;
	char *str;

	va_start(args_list, n);
	for (; count < n; count++)
	{
		str = va_arg(args_list, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && count < (n - 1))
			printf("%s", separator);
	}

	va_end(args_list);

	printf("\n");
}
