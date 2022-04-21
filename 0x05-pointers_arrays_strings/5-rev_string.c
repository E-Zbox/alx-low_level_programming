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

	char string[len - 1];

	/* create a copy of string 's' */
	for (count = 0; count < len; count++)
		string[count] = s[count];

	for (count = len; count >= 0; count--)
		s[len - count] = string[count];

}
