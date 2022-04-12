#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabets
 *
 * Return: Always void (Success)
 */
void print_alphabet_x10(void)
{
	char _char;
	int count = 0;

	while (count < 10)
	{
		_char = 'a';
		while (_char <= 'z')
		{
			_putchar(_char);
			_char++;
		}
		_putchar('\n');
		count++;
	}
}
