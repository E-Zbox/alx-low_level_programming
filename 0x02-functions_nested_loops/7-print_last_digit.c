#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: the int parameter
 *
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
	int number;

	if (num < 0)
		num = -num;

	number = num % 10;

	if (number < 0)
		number = -number;

	_putchar(number + '0');

	return (number);
}
