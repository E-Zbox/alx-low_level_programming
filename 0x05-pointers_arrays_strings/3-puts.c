#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: char
 * 
 * Return: void
 */
void _puts(char *str)
{
	int count, len;
	len = strlen(str);

	for (count = 0; count < len; count++)
		putchar(str[count]);

	putchar('\n');
}
