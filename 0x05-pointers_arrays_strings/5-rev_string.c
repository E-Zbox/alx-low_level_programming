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
	int len = 0;
	char *string;

	/* create a copy of string 's' */
	string = s;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	char string1[len], string2[len];

	/* create another copy of string 's' */
	strcpy(string1, string);

	len--;
	for (count = 0; count <= len; count++)
	{
		string2[count] = string1[len - count];
	}

	strcpy(s, string2);
	strcpy(string, string2);
}
