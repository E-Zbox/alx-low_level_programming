#include <stdio.h>

/**
 * main - print all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int single_num;

	for (single_num = 0; single_num < 10; single_num++)
	{
		putchar(single_num + '0');
		if (single_num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
