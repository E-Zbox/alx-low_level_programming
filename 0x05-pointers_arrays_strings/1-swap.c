#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: int pointer
 * @b: int pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int a_value = *a;
	*a = *b;
	*b = a_value;
}
