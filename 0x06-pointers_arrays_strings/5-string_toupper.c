#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @_char: string literal
 *
 * Return: string literal
 */
char *string_toupper(char *_char)
{
	int count = 0;
	int delta = 'a' - 'A';

	for (; _char[count]; count++)
	{
		if ((_char[count] >= 'a') && (_char[count] <= 'z'))
			_char[count] -= delta;
	}

	return (_char);
}
