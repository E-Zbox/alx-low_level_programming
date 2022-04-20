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
	char *string = *s;

	len = strlen(s);
	for (count = len; count >= 0; count--)
		s[len - count] = string[count];

}
