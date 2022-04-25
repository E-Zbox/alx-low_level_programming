#include "main.h"

/**
 * leet - encodes a string into 1337
 * a, A = 4
 * e, E = 3
 * o, O = 0
 * t, T = 7
 * l, L = 1
 * @string: string literal
 *
 * Return: string literal
 */
char *leet(char *string)
{
	int count, index;

	char specials[5] = {
		{'A', 'a', '4'}, {'E', 'e', '3'},
		{'O', 'o', '0'}, {'T', 't', '7'},
		{'L', 'l', '1'}
	};

	for (count = 0; string[count]; count++)
	{
		for (index = 0; index < 5; index++)
		{
			if (string[count] == specials[index][0] || string[count] == special[index][1])
				string[count] = specials[index][2];
		}
	}

	return (string);
}

