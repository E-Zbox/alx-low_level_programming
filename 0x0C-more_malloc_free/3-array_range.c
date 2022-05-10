#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: int (minimum integer in array)
 * @max: int (maximum integer in array)
 *
 * Return: int *
 */
int *array_range(int min, int max)
{
	int index = 0, array_size;
	int *array_integer;

	if (min > max)
		return (NULL);

	array_size = (max + 1) - min;

	array_integer = malloc(array_size * sizeof(int));

	if (array_integer == NULL)
		return (NULL);

	for (; index < array_size; index++)
		array_integer[index] = min + index;
	
	return (array_integer);
}
