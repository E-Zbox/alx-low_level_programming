#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: int *
 * @size: size_t (size of the array)
 * @action: void ()(int) (a pointer to the function to be used)
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index = 0;

	for (; index < size; index++)
		action(array[index]);
}
