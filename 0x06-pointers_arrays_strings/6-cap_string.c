#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @_str: string literal
 *
 * Return: string literal
 */
char *cap_string(char *_str)
{
	int count = 1;
	int delta = 'a' - 'A';

	_str[0] -= delta;

	for (; _str[count]; count++)
	{
		if (((_str[count - 1] == ' ') || (_str[count - 1] == '\t') || (_str[count - 1] == '\n') || (_str[count - 1] == '.')) && ((_str[count] >= 'a') && (_str[count] <= 'z')))
			_str[count] -= delta;
	}

	return (_str);
}
