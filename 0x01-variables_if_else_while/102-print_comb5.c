#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 * the program should range from 0 to 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstDigit;

	for (firstDigit = 0; firstDigit < 10; firstDigit++)
	{
		int secondDigit;

		for (secondDigit = 0; secondDigit < 10; secondDigit++)
		{
			int thirdDigit;

			for (thirdDigit = 0; thirdDigit < 10; thirdDigit++)
			{
				int fourthDigit;

				for (fourthDigit = 1; fourthDigit < 10; fourthDigit++)
				{
					putchar(firstDigit);
					putchar(secondDigit);
					putchar(' ');
					putchar(thirdDigit);
					putchar(fourthDigit);

					if(firstDigit != secondDigit && secondDigit != thirdDigit && thirdDigit != fourthDigit) {
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
