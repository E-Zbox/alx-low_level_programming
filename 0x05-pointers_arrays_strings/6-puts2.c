#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every even character of a string,
 * starting with the first character, followed by a new line
 * @str: string literal
 *
 * Return: void
 */
void puts2(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		if (count % 2 == 0)
			putchar(*str);

		count++;
		str++;
	}

	putchar('\n');
}
