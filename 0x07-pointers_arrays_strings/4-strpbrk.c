#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string literal
 * @accept: string literal
 *
 * Return: string literal
 */
char *_strpbrk(char *s, char *accept)
{
	int index1, index2;
	int len_accept = 0;

	char *first_occurrence = "";

	while (accept[len_accept])
		len_accept++;

	index1 = index2 = 0;

	for (; s[index1]; index1++)
	{
		for (index2 = 0; index2 < len_accept; index2++)
		{
			if (accept[index2] == s[index1])
			{
				if (first_occurrence > (s + index1))
					first_occurrence = s + index1;
			}
		}
	}

	return (first_occurrence);
}
