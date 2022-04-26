#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string literal
 * @c: char
 *
 * Return: string literal
 */
char *_strchr(char *s, char c)
{
	int count = 0;

	for (; s[count]; count++)
	{
		if (s[count] == c)
			return (s + count);
	}

	return ("");
}
