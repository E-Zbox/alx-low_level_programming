#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int count, len;

	len = strlen(s);
	for (count = len - 1; count > -1; count--)
		putchar(s[count]);

	putchar('\n');
}
