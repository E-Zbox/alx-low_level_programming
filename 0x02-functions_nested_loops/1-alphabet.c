#include "main.h"

/**
 * print_alphabet - print all alphabet
 *
 * Return: Always void (Success)
 */
void print_alphabet(void)
{
	char _char;

	for (_char = 'a'; _char <= 'z'; _char++)
	{
		_putchar(_char);
	}
	_putchar('\n');
}
