#include "main.h"

/**
 * _memset: fills memory with a constant byte
 * @s: string literal
 * @b: char
 * @n: unsigned int n
 *
 * Return: string literal
 */
char *_memset(char *s, char b, unsigned int n)
{
	int count = 0;

	for (; count < n; count++)
	{
		s[count] = b;
	}

	return (s);
}
