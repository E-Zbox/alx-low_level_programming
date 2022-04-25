#include <string.h>
#include "main.h"

/**
 * _strncat - similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: string literal
 * @src: string literal
 * @n: int
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int len_dest = strlen(dest);

	for (; src[count] && count < n; count++)
		dest[len_dest + count] = src[count];

	dest[len_dest + count] = '\0';

	return (dest);
}
