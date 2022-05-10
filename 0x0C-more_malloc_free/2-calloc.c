#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: unsigned int (number of elements in the array)
 * @size: unsigned int (size of a single element)
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int index = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);

	for (; index < nmemb; index++)
		pointer[index] = 0;

	return (pointer);
}
