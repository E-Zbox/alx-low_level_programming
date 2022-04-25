#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string literal
 * @s2: string literal
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;

	for (; s1[count]; count++)
	{
		if (s1[count] == s2[count])
			return (0);
	}

	return (1);
}
