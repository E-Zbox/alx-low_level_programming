#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 *
 * @num: print from this number
 */
void print_to_98(int num)
{
	int lessThan, greaterThan;

	if (num <= 98)
	{
		for (lessThan = num; lessThan <= 98; lessThan++)
		{
			if (lessThan != 98)
				printf("%d, ", lessThan);
			else if (lessThan == 98)
				printf("%d\n", lessThan);
		}
	} else if (num >= 98)
	{
		for (greaterThan = num; greaterThan >= 98; greaterThan--)
		{
			if (greaterThan != 98)
				printf("%d, ", greaterThan);
			else if (greaterThan == 98)
				printf("%d\n", greaterThan);
		}
	}
}
