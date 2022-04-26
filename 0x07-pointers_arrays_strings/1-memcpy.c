#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: string literal
 * @src: string literal
 * @n: unsigned int
 *
 * Return: string literal
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	for (; count < n; count++)
	{
		dest[count] = src[count];
	}

	return (dest);
}
