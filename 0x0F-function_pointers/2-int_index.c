#include "function_pointers.h"

/**
 * int_index - searches for an integer and returns the index of the first
 * element for which the cmp function does not return (0)
 * if no element matches, return (-1)
 * @array: int *
 * @size: int (number of elements in the array 'array')
 * @cmp: int (*)(int) (a pointer to the function to be used to compare values)
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0)
		return (-1);

	for (; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}

	return (-1);
}
