#include <stdio.h>
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
	len = _strlen(str);

	for (count = 0; count < len; count++)
		putc(str[count]);

	putc('\n');
}
