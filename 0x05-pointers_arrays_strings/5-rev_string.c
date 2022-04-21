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
	int count;
	int len = strlen(s);

	char string[len], string2[len];

	/* create a copy of string 's' */
	strcpy(string, s);

	for (count = 0; count < len; count++)
	{
		string2[count] = string[len - count - 1];
	}

	strcpy(s, string2);
}
