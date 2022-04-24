#include <string.h>
#include "main.h"

/**
 * _strcat - appends src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: string literal
 * @src: string literal
 * 
 * Return: Always char *
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;
	int len_dest = strlen(dest);

	for (; src[count]; count++)
		dest[len_dest + count] = src[count];

	dest[len_dest + count] = '\0';

	return dest;
}
