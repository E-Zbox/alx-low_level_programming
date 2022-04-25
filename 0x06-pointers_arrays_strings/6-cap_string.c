#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @_str: string literal
 *
 * Return: string literal
 */
char *cap_string(char *string)
{
	int delta = 'a' - 'A';

	char *separators = " \n\t,;.!?\"(){}";
	int count = 0;
	int index;
	int len_separators = 0;

	while (separators[len_separators])
	{
		len_separators++;
	};

	for (; string[count] != '\0'; count++)
	{
		if (count == 0 && string[count] >= 'a' && string[count] <= 'z')
			string[count] -= delta;

		for (index = 0; index < len_separators; index++)
		{
			if (string[count - 1] == separators[index])
			{
				if (string[count] >= 'a' && string[count] <= 'z')
				{
					string[count] -= delta;
				}
			}
		}
	}

	return (string);
}
