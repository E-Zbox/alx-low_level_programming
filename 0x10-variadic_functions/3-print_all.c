#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * formatStruct - structure format
 * @c: char
 * @func: void
 *
 * Description: formatted structure
 */
typedef struct formatstruct
{
	char c;
	void (*func)(char *, void);
} formatStruct;

void print_c(char *sep, char c)
{
	printf("%c%s", c, sep);
}

void print_i(char *sep, int i)
{
	printf("%d%s", i, sep);
}

void print_f(char *sep, float f)
{
	printf("%f%s", f, sep);
}

void print_s(char *sep, char *s)
{
	printf("%s%s", s, sep);
}

/**
 * print_all - prints anything
 * @format: char *
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
	va_list args_list;
	int len_format = 0, index = 0;
	void item;
	char *sep, *sep2;

	formatStruct struct_list[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s}
	};

	while (format[len_format])
		len_format += 1;

	sep = "";
	sep2 = ", ";

	va_start(args_list, len_format);

	while (format[index])
	{
		item = va_arg(args_list, len_format);

		if (format[index] == struct_list[index]->c)
		{
			if (format[index] == 'c' && item == NULL)
			{
				printf("(nil)%s", sep);
				break;
			}

			struct_list[index]->func(sep, item);
		}

		while (index == (len_format - 1))
		{
			sep2 = "";
			break;
		}

		sep = sep2;

		index++;
	}
