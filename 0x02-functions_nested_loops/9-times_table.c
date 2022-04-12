#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * 
 * Return: void
 */
void times_table(void)
{
	int row, column, num;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			num = column * row;
			if (column == 0)
			{
				_putchar(num + '0');
			}

			if (num < 10 && column != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
			} else if (num >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
