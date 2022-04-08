#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char _char;
	int _int;
	long _long;
	long long _longLong;
	float _float;
	
	printf("Size of a char: %lu byte(s)\n", sizeof(_char));
	printf("Size of an int: %lu byte(s)\n", sizeof(_int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(_long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(_longLong));
	printf("Size of a float: %lu byte(s)\n", (sizeof(_float));
	
	return (0);
}
