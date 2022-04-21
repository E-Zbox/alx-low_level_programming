#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: string literal
 *
 * Return: void
 */
void puts_half(char *str)
{
	int count, strHalfLength, strLength;

	strLength = strlen(str);
	strHalfLength = strLength / 2;

	char str_copy[100];
	strcpy(str_copy, str);

	while (count <= strHalfLength)
	{
		putchar(str_copy[count]);
		count++;
	}

	putchar('\n');
}
