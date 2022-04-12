#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 *
 * Return: void
 */
void jack_baeur(void)
{
	int count, num;

	count = 0;
	while (count < 24)
	{
		num = 0;
		while (num < 60)
		{
			_putchar((count / 10) + '0');
			_putchar((count % 10) + '0');
			_putchar(':');
			_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
			_putchar('\n');
			num ++;
		}
		count++;
	}
}
