#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: char *
 * @s2: char *
 * @n: unsigned int
 *
 * Return: char *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index, len_strings[2];
	char *newString;
	int len_newString;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	index = 0;
	len_strings[0] = 0;
	len_strings[1] = 0;

	while (s1[len_strings[0]])
		len_strings[0]++;

	while (s2[len_strings[1]])
		len_strings[1]++;

	len_strings[1] = n < len_strings[1] ? n : len_strings[1];
	
	len_newString = (len_strings[0] + len_strings[1]) * sizeof(char) + 1;
	
	newString = malloc(len_newString);

	if (newString == NULL)
		return (NULL);

	for (; index <= len_strings[0]; index++)
	{
		newString[index] = s1[index];
	}

	index = 0;

	for (; index <= len_strings[1]; index++)
		newString[len_strings[0] + index] = s2[index];

	newString[len_newString] = '\0';

	return (newString);
}
