#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @_str: string literal
 *
 * Return: string literal
 */
char *cap_string(char *_str)
{
	int count = 0;
	int delta = 'a' - 'A';

	for (; _str[count]; count++)
	{
		if (((_str[count - 1] == ' ') || (_str[count - 1] == 10)) && _str[count] >= 'a' && _str[count] <= 'z')
			_str[count] -= delta;
	}

	return (_str);
}
