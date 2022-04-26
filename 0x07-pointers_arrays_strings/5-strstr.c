#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string literal
 * @needle: string literal
 *
 * Return: string literal
 */
char *_strstr(char *haystack, char *needle)
{
	int index1, index2;
	int count = 0;
	int len_needle = 0;

	while (needle[len_needle])
		len_needle++;

	for (index1 = 0; haystack[index1]; index1++)
	{
		if (needle[0] == haystack[index1])
		{
			for (index2 = 0; index2 < len_needle; index2++)
			{
				if ((needle[index2] == haystack[index1 + count]) && (count != (len_needle - 1)))
				{
					count++;
				}
				else if (count == (len_needle - 1))
				{
					return (haystack + index1);
				}
				else
				{
					count = 0;
					break;
				}
			}
		}
	}

	return ("");
}
