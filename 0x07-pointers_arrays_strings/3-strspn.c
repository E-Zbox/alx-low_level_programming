#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string literal
 * @accept: string literal
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int index1, index2;
	int len_accept = 0;
	unsigned int count = 0;

	index1 = index2 = 0;
	while (accept[len_accept])
		len_accept++;

	for (; s[index1]; index1++)
	{
		if (s[index1] == ' ')
			break;

		for (index2 = 0; index2 < len_accept; index2++)
		{
			if (s[index1] == accept[index2])
				count++;
		}
	}

	return (count);
}
