#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int count, len;

	len = strlen(s);

	char string[], string2[];

	/* create a copy of string 's' */
	strcpy(string, s);

	for (count = 0; count < len; count--)
	{
		string2[count] = string[len - count - 1];
	}

	strcpy(s, string2);
}
