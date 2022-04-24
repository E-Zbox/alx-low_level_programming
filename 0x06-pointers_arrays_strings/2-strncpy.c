#include "main.h"

/**
 * _strncpy - copies a string
 * run man strncpy to learn more
 * @dest: string literal
 * @src: string literal
 * @n: int
 *
 * Return: string literal dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	for (; src[count] != '\0' && count < n; count++)
		dest[count] = src[count];

	for (; count < n; count++)
		dest[count] = '\0';

	return dest;
}
